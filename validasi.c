//=============================================== Validasi username ==============================================//
void valUser(char user[])
{
    char inputan;
    char data1[30] = {};
    char data2[30] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 3  )
    {
        if (index < 10 && (inputan >= 'a' && inputan <= 'z' || (inputan >= '0' && inputan <= '9') && index != 0) && (inputan != data1[index - 1] || inputan != data1[index - 2]))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    for (int a = 0; a < index; a++)
    {
        data2[a] = data1[a];
    }
    strcpy (user, data2);
}

//================================================ Validasi password ================================================//
void valPass(char pass[])
{
    char inputan;
    char data1[30] = {};
    char data2[30] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 5 || data1[index - 1] == ' ' )
    {
        if (index < 8 && (inputan >= 'a' && inputan <= 'z' || inputan >= 'A' && inputan <= 'Z' || inputan == ' ' && index != 0 && data1[index - 1] != ' ' || inputan >= '0' && inputan <= '9'))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    for (int a = 0; a < index; a++)
    {
        data2[a] = data1[a];
    }
    strcpy (pass, data2);
}
//================================================ Validasi No hp ================================================//
void valNohp(char nohp[])
{
    char inputan;
    char data1[30] = {};
    char data2[30] = {};
    int index = 0;

    while ((inputan = getch()) != 13 || index < 9)
    {
        if (inputan >= '0' && inputan <= '9' && index < 11 && (inputan != data1[index - 1] || inputan != data1[index - 2] || inputan != data1[index - 3]))
        {
            if (index >= 1 || (index == 0 && inputan != '4' && index == 0 && inputan != '6' && index == 0 && inputan != '0'))
            {
                printf("%c", inputan);
                data1[index] = inputan;
                index++;
            }
            else if (index >= 4)
            {
                printf("%c", inputan);
                data1[index] = inputan;
                index++;
            }
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
        for (int a = 0; a < index; a++)
        {
            data2[a] = data1[a];
        }
    }
    strcpy(nohp, data2);
}
//================================================ Validasi nama ================================================//
void valNama(char nama[])
{
    char inputan;
    char tamp[30]={};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 3 || tamp[index - 1] == ' ')
    {
        if (index < 30 && (inputan >= 'A' && inputan <= 'Z' && index == 0 || inputan >= 'A' && inputan <= 'Z' && tamp[index - 1] == ' ' || inputan == ' ' && index != 0 && tamp[index - 1] != ' ' ||
            inputan >= 'a' && inputan <= 'z' && index != 0 && tamp[index - 1] != ' ') && (inputan != tamp[index - 1] || inputan != tamp[index - 2]))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy (nama, tamp);
}
//================================================ Validasi jenis kelamin ================================================//
void valJenis_kelamin(char jenis_kelamin[])
{
    char input;
    char tamp[30]={};
    int index = 0;
    while ((input = getch()) != 13 || index < 1)
    {
        if (index < 1 && (input == 'P' || input == 'p' || input == 'l' || input == 'L'))
        {
            printf("%c", input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy (jenis_kelamin, tamp);
}
//================================================== Validasi Alamat ==============================================//
void valAlamat(char alamat[])
{
    char tamp[100];
    char inputan;
    int index = 0;
    int space = 0;
    while ((inputan = getch()) != 13 || index < 4 || tamp[index - 1] == ' ')
    {
        if (inputan >= 'a' && inputan <= 'z' && index != 0 && (inputan != tamp[index - 1] || inputan != tamp[index - 2]) && index < 19 ||
            inputan >= 'A' && inputan <= 'Z' && (index == 0 || tamp[index - 1] == ' ') && index < 19 ||
            inputan == ' ' && index != 0 && inputan != tamp[index - 1] && space < 1)
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
            if (inputan == ' ')
            {
                space++;
            }
        }
        else if (inputan == 8 && index != 0)
        {
            if (tamp[index - 1] == ' ')
            {
                space--;
            }
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy (alamat, tamp);
}

void valPilih_kilo(char pilihkilo[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 1)
    {
        if (index < 1 && (inputan >= '1' && inputan <= '4' && index==0))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy (pilihkilo, tamp);
}

void valPilih3(char pilih3[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 )
    {
        if (index < 1 && (inputan >= '1' && inputan <= '3' && index==0))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy(pilih3, tamp);
}

void valPilih(char pilih[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 1)
    {
        if (index < 1 && (inputan >= '1' && inputan <= '2' && index==0 ))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy(pilih, tamp);
}


void valPilih_lagi(char pilih_lagi[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 1)
    {
        if (index < 1 && (inputan == 'y' || inputan == 'Y' || inputan == 't'|| inputan =='T'))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0'; //isi nys jadi kosong
        }
    }
    strcpy (pilih_lagi,tamp);
}

void valpilih_item(char pilihitem[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 1)
    {
        if (index < 2 && ((index == 0 && (inputan >= '1' && inputan <= '9')) || (index == 1 && ( (tamp[index-1] == '1' && (inputan >= '0' && inputan<= '9')) || (tamp[index-1] == '2' && (inputan >='0' && inputan<='1')) ) )))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0'; //isi nya jadi kosong
        }
    }
   strcpy(pilihitem, tamp);
}

void valjumlah(char jumlah[]){
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 1)
    {
        if (index < 2 && ((index == 0 && (inputan >= '1' && inputan <= '9')) || (index == 1 && ( (tamp[index-1] == '1' && (inputan >= '0' && inputan<= '9')) || (tamp[index-1] == '2' && (inputan >='0' && inputan <='1')) ) )))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0'; //isi nya jadi kosong
        }
    }
    strcpy(jumlah, tamp);
}

void valUang(char harga[])
{
    char inputan;
    char tamp[100] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 3)
    {
        if (index < 10 && (inputan >= '1' && inputan <= '9' || inputan == '0' && index != 0))
        {
            printf("%c", inputan);
            tamp[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    strcpy(harga,tamp);
}


//pointer mengcopy 