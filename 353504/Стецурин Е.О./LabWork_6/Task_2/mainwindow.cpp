#include "mainwindow.h"
#include "notebook.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QTextStream>
#include <QFile>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , stream_in(&text_in)
    , stream_out(&text_out)
{
    ui->setupUi(this);
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::menu);
    timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    if (!ui->lineEdit->isReadOnly())
    text_in += ui->lineEdit->text();
}

void MainWindow::menu()
{
    QTextEdit& out = *ui->textEdit;
    QLineEdit& in = *ui->lineEdit;

    while (true) {
        QCoreApplication::processEvents();

        stream_out << "Меню:\n1. Пункт 1: ввести один абзац текста (до нажатия Enter). Сохранить данный текст в текстовый файл с именем «СтецуринЛаб20.txt» посредством посимвольной записи.\n"
                      "2. Пункт 2: посимвольно считать из текстового файла с именем «СтецуринЛаб20.txt» текст и вывести его на экран.\n"
                      "3. Пункт 3: ввести размер массива и массив типа float, разделяющий символ «>». Сохранить эти элементы массива в текстовый файл с именем «СтецуринЛаб20_0.txt» посредством потокового ввода.\n"
                      "4. Пункт 4: cчитать из текстового файла с именем «СтецуринЛаб20_0.txt» элементы массива посредством потокового вывода и вывести на экран считанный из файла массив, разделяя печатаемые значения символом «пробел».\n"
                      "5. Пункт 5: ввести содержимое полей объекта типа структуры Notebook. Сохранить содержимое всех полей структуры в текстовый файл с именем «СтецуринЛаб20_1.txt».\n"
                      "6. Пункт 6: прочитать из текстового файла с именем «СтецуринЛаб20_1.txt» все записанные в нем структуры и распечатать содержимое их полей на экран, разделяя содержимое полей знаком '|'.\n"
                      "7. Пункт 7: запросить у пользователя ввести содержимое полей объекта типа вашей структуры. Сохранить содержимое всех полей структуры в бинарный файл с именем «СтецуринЛаб20_2.bin»\n"
                      "8. Пункт 8: прочитать из бинарного файла с именем «СтецуринЛаб20_2.bin» все записанные в нем структуры и распечатать содержимое их полей на экран, разделяя содержимое полей символами \" ; \".\n"
                      "9. Пункт 9: запросить у пользователя ввести предложение (до нажатия Enter) и дописать данное предложение в текстовый файл с именем «СтецуринЛаб20_3.txt» в виде отдельной строки.\n"
                      "10. Пункт 10: построчно считать из текстового файла с именем «СтецуринЛаб20_3.txt» все предложения и вывести их на экран.\n"
                      "11. Выход\n"
                      "Выберите пункт меню: \n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        in.setReadOnly(false);
        while (text_in.isEmpty()){
            QCoreApplication::processEvents();
        }
        int choice;
        stream_in >> choice;
        if (stream_in.status() != QTextStream::Ok) {
            text_in.clear();
            stream_in.resetStatus();
        } else {
            text_in.remove(0, stream_in.pos());
            stream_out << choice << '\n';
        }
        stream_in.seek(0);
        in.setText(text_in);
        processMenuChoice(choice);
    }
}

void MainWindow::processMenuChoice(int choice) {
    auto& out = *ui->textEdit;
    auto& in = *ui->lineEdit;
    switch (choice) {
    case 1:
    {
        QString fileName = "СтецуринЛаб20.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        stream_out << "Вы выбрали пункт 1\nВведите абзац текста\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        text_in.clear();
        in.setReadOnly(false);
        while (text_in.isEmpty()){
            QCoreApplication::processEvents();
        }
        in.setReadOnly(true);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для записи\n";
        } else {
            for (int i = 0; i < text_in.length(); ++i) {
                file_stream << text_in.at(i);
            }
            file.close();
            text_in.clear();
            in.setText(text_in);
            stream_in.readAll();
            stream_out << "Текст успешно записан в файл\n";
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 2:
    {
        QString fileName = "СтецуринЛаб20.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        stream_out << "Вы выбрали пункт 2\nСодержимое файла:\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для чтения\n";
        } else {
            while (!file_stream.atEnd()) {
                QChar character;
                file_stream >> character;
                stream_out << character;
            }
            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 3:
    {
        QString fileName = "СтецуринЛаб20_0.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        stream_out << "Вы выбрали пункт 3\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для записи\n";
        } else {
            stream_out << "Введите размер массива\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            int n;
            stream_in >> n;
            if (stream_in.status() != QTextStream::Ok || n < 0) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << n << '\n';
            }
            in.setText(text_in);

            float c;
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                stream_out << "Введите символ (" << i+1 << "/" << n << ")\n";
                out.setText(text_out);
                out.moveCursor(QTextCursor::End);
                while (text_in.isEmpty()){
                    QCoreApplication::processEvents();
                }
                stream_in >> c;
                if (stream_in.status() != QTextStream::Ok) {
                    stream_out << "Неверный ввод\n";
                    stream_in.seek(0);
                    stream_in.resetStatus();
                    text_in.clear();
                    ok = false;
                    break;
                } else {
                    text_in.remove(0, stream_in.pos());
                    stream_in.seek(0);
                    stream_out << c << '\n';
                }
                in.setText(text_in);
                file_stream << c << '>';
            }

            file.close();
            if (ok) stream_out << "Числа успешно записаны в файл\n";
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }

    case 4:
    {
        stream_out << "Вы выбрали пункт 4\nСодержимое файла:\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_0.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для чтения\n";
        } else {
            while (!file_stream.atEnd()) {
                QChar character;
                file_stream >> character;
                if (character == '>'){
                    stream_out << ' ';
                } else {
                    stream_out << character;
                }
            }
            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 5:
    {
        stream_out << "Вы выбрали пункт 5\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_1.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для записи\n";
        } else {
            Notebook notebook;
            stream_out << "Введите год выпуска (int)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.year;
            if (stream_in.status() != QTextStream::Ok || notebook.year < 1900 || notebook.year > 2025) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.year << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите цену (double)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.price;
            if (stream_in.status() != QTextStream::Ok || notebook.price < 0) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                //notebook.price = round(notebook.price * 100.0) / 100.0;
                stream_out << QString::number(notebook.price) << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите название модели ноутбука (char)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.model;
            if (stream_in.status() != QTextStream::Ok) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.model << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите доступность ноута (bool as int)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            int t;
            stream_in >> t;
            if (stream_in.status() != QTextStream::Ok) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                notebook.isAvailable = t;
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.isAvailable << '\n';
            }
            in.setText(text_in);

            file_stream << notebook.year << '\n' << QString::number(notebook.price, 'g', 100) << '\n' << notebook.model << '\n' << notebook.isAvailable << '\n';

            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }

    case 6:
    {
        stream_out << "Вы выбрали пункт 6\nСодержимое файла:\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_1.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для чтения\n";
        } else {
            int i = 0;
            QString line;
            QVector<QString> vec(4);
            while (!file_stream.atEnd()) {
                line = file_stream.readLine();
                vec[i] = line;
                ++i;
                if (i == 4) {
                    for (int j = 0; j < i; ++j){
                        if (j != 0) stream_out << " | ";
                        stream_out << vec[j];
                    }
                    stream_out << '\n';
                    i = 0;
                }
            }
            for (int j = 0; j < i; ++j){
                if (j != 0) stream_out << " | ";
                stream_out << vec[j];
            }
            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 7:
    {
        stream_out << "Вы выбрали пункт 7\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_2.bin";
        std::ofstream file(fileName.toStdString(), std::ios::binary | std::ios::app);
        if (!file.is_open()) {
            stream_out << "Не удалось открыть файл " << fileName << " для записи\n";
        } else {
            Notebook notebook;
            stream_out << "Введите год выпуска (int)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.year;
            if (stream_in.status() != QTextStream::Ok || notebook.year < 1900 || notebook.year > 2025) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.year << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите цену (double)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.price;
            if (stream_in.status() != QTextStream::Ok || notebook.price < 0) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.price << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите название модели ноутбука (char)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            stream_in >> notebook.model;
            if (stream_in.status() != QTextStream::Ok) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.model << '\n';
            }
            in.setText(text_in);

            stream_out << "Введите доступность ноута (bool as int)\n";
            out.setText(text_out);
            out.moveCursor(QTextCursor::End);
            in.setReadOnly(false);
            while (text_in.isEmpty()){
                QCoreApplication::processEvents();
            }
            int t;
            stream_in >> t;
            if (stream_in.status() != QTextStream::Ok) {
                stream_out << "Неверный ввод\n";
                stream_in.resetStatus();
                text_in.clear();
                file.close();
                stream_in.seek(0);
                break;
            } else {
                notebook.isAvailable = t;
                text_in.remove(0, stream_in.pos());
                stream_in.seek(0);
                stream_out << notebook.isAvailable << '\n';
            }
            in.setText(text_in);

            file.write(reinterpret_cast<const char*>(&notebook), sizeof(notebook));

            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 8:
    {
        stream_out << "Вы выбрали пункт 8\nСодержимое файла:\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_2.bin";
        std::ifstream file(fileName.toStdString(), std::ios::binary);
        if (!file.is_open()) {
            stream_out << "Не удалось открыть файл " << fileName << " для чтения\n";
        } else {
            Notebook notebook;
            while (!file.eof()) {
                file.read(reinterpret_cast<char*>(&notebook), sizeof(notebook));
                if (file.eof()) break;
                stream_out << "Год выпуска: " << notebook.year << " \n";
                stream_out << "Цена: " << notebook.price << " \n";
                stream_out << "Модель: " << notebook.model << " \n";
                stream_out << "Доступность: " << (notebook.isAvailable ? "Да" : "Нет") << '\n';
            }
            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 9:
    {
        QString fileName = "СтецуринЛаб20_3.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        stream_out << "Вы выбрали пункт 9\nВведите абзац текста\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        text_in.clear();
        in.setReadOnly(false);
        while (text_in.isEmpty()){
            QCoreApplication::processEvents();
        }
        in.setReadOnly(true);
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для записи\n";
        } else {
            file_stream << text_in << '\n';
            file.close();
            text_in.clear();
            in.setText(text_in);
            stream_in.readAll();
            stream_out << "Текст успешно записан в файл\n";
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 10:
    {
        stream_out << "Вы выбрали пункт 10\nСодержимое файла:\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        QString fileName = "СтецуринЛаб20_3.txt";
        QFile file(fileName);
        QTextStream file_stream(&file);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            stream_out << "Не удалось открыть файл " << fileName << " для чтения\n";
        } else {
            QString line;
            while (!file_stream.atEnd()) {
                line = file_stream.readLine();
                stream_out << line << '\n';
            }
            file.close();
        }
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
        break;
    }
    case 11:
        stream_out << "Выход из программы.\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);

        exit(0);
        break;
    default:
        stream_out << "Некорректный ввод. Пожалуйста, выберите пункт меню от 1 до 11.\n";
        out.setText(text_out);
        out.moveCursor(QTextCursor::End);
    }
    stream_out << "\n";
    out.setText(text_out);
    out.moveCursor(QTextCursor::End);
    in.setReadOnly(true);
}

