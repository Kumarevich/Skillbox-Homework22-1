#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> phoneBook;
    phoneBook.insert(std::pair<std::string, std::string>("69-70-30", "IVANOV"));
    phoneBook.insert(std::pair<std::string, std::string>("69-74-60", "PETROV"));
    phoneBook.insert(std::pair<std::string, std::string>("69-01-75", "BULGAKOV"));
    phoneBook.insert(std::pair<std::string, std::string>("67-75-92", "IVANOV"));
    phoneBook.insert(std::pair<std::string, std::string>("75-93-34", "IVANOV"));

    std::map<std::string, std::string>::iterator it = phoneBook.find("69-70-30");
    std::cout << it->first << ": " << it->second << std::endl;
    std::map<std::string, std::string>::iterator itTemp;

    std::map<std::string, std::string> phoneBookName;
    for (it = phoneBook.begin(); it != phoneBook.end(); ++it) {
        itTemp = phoneBookName.find(it->second);
        if (itTemp == phoneBookName.end()) phoneBookName.insert(std::pair<std::string, std::string>(it ->second, it ->first));
        else itTemp -> second += " " + it -> first;
    }

    it = phoneBookName.find("IVANOV");
    std::cout << it->first << ": " << it->second << std::endl;

    return 0;
}
