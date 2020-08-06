/*
#include "Lib.h"

void rand_write(const char* file)
{
    FILE* f;
    f = fopen(file, "wb");

    if (f == NULL)
    { 
        cout << "Error!" << endl;
        return;
    }
    //***************************************
    char ch = 'h';
    int num = 2;
    float f_num = 3.3;
    double d_num = 4.4;


    fwrite(&ch, sizeof(char), 1, f);
    fwrite(&num, sizeof(int), 1, f);
    fwrite(&f_num, sizeof(float), 1, f);
    fwrite(&d_num, sizeof(double), 1, f);
    
    //***************************************
    fclose(f);  
}

void rand_read(const char* file)
{
    FILE* f;
    f = fopen(file, "rb");

    if (f == NULL)
    { 
        cout << "Error!" << endl;
        return;
    }
    //***************************************
    char ch;
    int num;
    float f_num;
    double d_num;

    fread(&ch,    sizeof(char),  1, f); cout << "ch = "    << ch    << endl;
    fread(&num,   sizeof(int),   1, f); cout << "num = "   << num   << endl;
    fread(&f_num, sizeof(float), 1, f); cout << "f_num = " << f_num << endl;
    fread(&d_num, sizeof(double), 1, f); cout << "d_num = " << d_num << endl;
    //***************************************
    fclose(f);
    f = NULL;  
}


void int_write(const char* file)
{
    int num;
    int n = rand()%20 + 1;
    FILE* f;
    f = fopen(file, "wb");

    if (f != NULL)
    { 
        for (int i = 0; i < n; i++)
        {
            num = i+1; fwrite(&num, sizeof(int), 1, f);
        }
        
        fclose(f);  
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void float_write(const char* file)
{
    float num;

    FILE* f;
    f = fopen(file, "wb");

    if (f != NULL)
    {
        num = 1.0; fwrite(&num, sizeof(float), 1, f);
        num = 2.0; fwrite(&num, sizeof(float), 1, f);
        num = 3.0; fwrite(&num, sizeof(float), 1, f);
        num = 4.0; fwrite(&num, sizeof(float), 1, f);
        num = 5.0; fwrite(&num, sizeof(float), 1, f);
        num = 6.0; fwrite(&num, sizeof(float), 1, f);

        fclose(f);  
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void int_read(const char* file)
{
    int num;

    FILE* f;
    f = fopen(file, "rb");

    if (f != NULL)
    {   
        for (int i = 0; !feof(f); i++)
        {
            if (fread(&num, sizeof(int), 1, f))
                cout << num << ' ';
        }
        cout << endl;

        fclose(f);
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void float_read(const char* file)
{
    float num;

    FILE* f;
    f = fopen(file, "rb");

    if (f != NULL)
    {   
        for (int i = 0; !feof(f); i++)
        {
            if (fread(&num, sizeof(float), 1, f))
                cout << num << ' ';
        }
        cout << endl;

        fclose(f);
    }
    else
    {
        cout << "Error!" << endl;
    }
}

int int_n_file(const char* file)
{
    int k = 0;
    int num;

    FILE* f = fopen(file, "rb");

    if (f != NULL)
    {
        while (!feof(f))
        {
            fread(&num, sizeof(int), 1, f);
            k++;       
        }
        fclose(f);

        return k-1;
    }
    else
    {
        cout << "Error open file(" << endl;
        return 0;
    }
}

int float_n_file(const char* file)
{
    int k = 0;
    float num;

    FILE* f = fopen(file, "rb");

    if (f != NULL)
    {
        while (!feof(f))
        {
            fread(&num, sizeof(float), 1, f);
            k++;       
        }
        fclose(f);

        return k-1;
    }
    else
    {
        cout << "Error open file(" << endl;
        return 0;
    }
}

float Round(float numb)
{
    return round(numb * 100)/100;
}

//File 43
void File43(const char* file1, const char* file2, const char* file3)
{
    char* min, max;
    
    int n_file1 = int_n_file(file1),
        n_file2 = int_n_file(file2),
        n_file3 = int_n_file(file3);

    if (n_file1 > n_file2)
    {
        if (n_file1 > n_file3)
            max = file1;
    }
    else if (int_n_file(file2) > int_n_file(file3))
    {

    }
    else
    
    FILE* fIn = fopen(file1, "rb");
    FILE* fOut = fopen(file2, "rb");
    FILE* tmp = fopen("tmp.dat", "wb");

    if (fIn == NULL || fOut == NULL)
    {
        cout << "Error open" << endl;
        return;
    }
    //***********чтение*********************************
    char ch;
    
    //**********сохранения во временный файл****************
    while (!feof(fIn))
    {
        fread(&ch, sizeof(char), 1, fIn);
        fwrite(&ch, sizeof(char), 1, tmp);
    }
    fclose(fIn);
    fclose(tmp);

    //*************Запись 2 файла*****************
    fIn = fopen(file1, "wb");
    while (!feof(fOut))
    {
        fread(&ch, sizeof(char), 1, fOut);
        fwrite(&ch, sizeof(char), 1, fIn);
    }
    fclose(fOut);
    fclose(fIn);

    //***********запись 1 файла**************
    tmp = fopen("tmp.dat", "rb");
    fOut = fopen(file2, "wb");
    while (!feof(tmp))
    {
        fread(&ch, sizeof(char), 1, tmp);
        fwrite(&ch, sizeof(char), 1, fOut);
    }
    fclose(fOut);
    fclose(tmp);
    //*******************************************
}

*/
