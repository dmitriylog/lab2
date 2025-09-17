#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void creating_file(int i){
    string fnames = "file" + to_string(i) + ".txt";
    ofstream file(fnames);

    if (!file.is_open()){
        cerr << "Ошибка! Не удалось создать файл " << fnames << endl;
        exit;
    }

    for (int j = 0; j < 10; j++) {
        int random_num = rand() % 10 + 1;
        file << random_num;

        if (j < 9) {
            file << " ";
        }
    }
    file.close();
    cout << "Файл " << fnames << " успешно создан." << endl;
}

int main()
{

    return 0;
}
