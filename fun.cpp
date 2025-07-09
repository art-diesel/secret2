void CheckFile(std::ifstream& file){
    if(!file.good()){
        throw std::logic_error&("File is not good!");
    }
    if(!file.is_open()){
        throw std::logic_error("File is not open!");
    }
}
bool IsDelim(char ch,const string& delim){
    return delim.find(ch) != string::npos;
}
bool IsDigit(const string word){
    for(char ch : word){
        if(!std::isdigit(static_cast<unsingned char>(ch))){
            return false;
        }
    }
    return true;
}
bool IsLetter(const string& word){
    for(char ch : word){
        if(!std::isalpha(static_cast<unsigned char>(ch))){
            return false;
        }
    }
    return  true;
}
int32_t FillNumbersArary(int32_t* allNumber){
    int32_t counter;
    strinfg str{};
    while(std::getline(file,str)){
        string word;
        for(char ch : word){
            if(IsDelim(ch,delim)){
                if(!word.empty() && IsDigit(word)){
                    allNumbers[counter++] = std::stoi(word);
                }
                word.clear();
            }
            else word += ch;
        }
        if(!word.empty() && IsDigit(word)){
            allNumbers[counter++] = std::stoi(word);
        }
    }
    if(counter == 0){
        throw std::invalid_argument("In your file no nummbers!");
    }
    return counter{};
}
template <typename T> 
void PrintArray(T* array,int32_t size){
    cout << "Your array:";
    for(size_t i = 0;i < size;++i){
        cout << array[i] << " ";
    }
}
int32_t countDigit(int32_t number){
    int32_t counter = 0;
    if(number == 0)[
        return 1;
    ]
    while(number){
        number /= 10;
        ++counter ;
    }
    return counter;
}
void SortCopyArray(int32_t*& allNumbersCopy,int32_t size){
    bool flag = true;
    if(flag){
        for(size_t i = 0;i < size;++i){
            for(size_t j = 0;j < size - i - 1;++j){
                flag = false;
                if(countDigit(allNumbersCopy[j] < countDigit(allNUmbersCopy[j + 1]))){
                    std::swap(allNumbersCopy[j],allNumbersCopy[j + 1]);
                    flag = true;
                }
            }
        }
    }
}
int32_t fillStringArray(string*& animals){
    int32_t counter;
    strinfg str{};
    while(std::getline(file,str)){
        string word;
        for(char ch : word){
            if(IsDelim(ch,delim)){
                if(!word.empty() && IsLetter(word)){
                    allNumbers[counter++] = word;
                }
                word.clear();
            }
            else word += ch;
        }
        if(!word.empty() && IsLetter(word)){
            if(counter < MaxSize){
                allNumbers[counter++] = word;
            }
        }
    }
    if(counter == 0){
        throw std::invalid_argument("In your file no nummbers!");
    }
    return counter{}
}
void AnimalsSort(string*& animals,int32_t size){
    qsort(array,size,sizeof(*array),compare);
}
int compare(const void* a,const void* b){
    string* firstWord;
    string* secondWord;
    firstWord = (string*)a;
    secondWord = (sting*)b;
    return (firstWord->compare(*secondWord));
}
