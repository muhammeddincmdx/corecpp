

int main(){
    float some_float = 13;
    {
        auto copy_float = some_float;
    }
    return 0;
}

some_float; /*
some_float died because we are out of the scope*/