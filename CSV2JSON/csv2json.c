#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

 void ConvertCSVtoJSON(int argc, char** argv)
 {
    char* input_file = argv[1];
    char* output_file = argv[2];
    char* header=argv[3];

    FILE* CSVfile=fopen(input_file, "r");
    FILE* JSONfile= fopen(output_file,"w");


    if(strcmp(header,"OFF")==0)
    {
        char satir[500];
        char json[500] = "";
        char split[] = ",\n";
        int counter = 0;
        fprintf(JSONfile, "[\n");

    while(fgets(satir,sizeof(satir),CSVfile)!=NULL)
    {
        fprintf(JSONfile, "\t{");
        strcat(json, satir);
        char *ptr = strtok(satir, split);

        fprintf(JSONfile,"\n");

        for(counter=1;ptr!=NULL;counter++)
        {
           fprintf(JSONfile,"\t\t\"COLUMN%d\":\t\"%s\",\n",counter,ptr);

            ptr=strtok(NULL,split);

        }
        counter=0;

        fprintf(JSONfile,"\t\n\t},\n");


    }

    fprintf(JSONfile,"\n]");

    fclose(CSVfile);
    fclose(JSONfile);
    printf("Dosyanýz baþarýlý bir þekilde dönüþtürüldü");

    }
    else if(strcmp(header,"ON")==0)
    {
        printf("Henuz bu kýsým geliþtirilmedi!");
    }
    else
    {
        printf("Yanlis algoritma girdiniz!");
    }

    }

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char* input_file = argv[1];
    char* output_file = argv[2];
    char* header = argv[3];
    if(argc <= 3){
        printf("Programin çalýþabilmesi icin 4 adet arguman girisi yapmalisiniz ! \n'MyProgram <CSV DosyaAdi> <json DosyaAdi> <header=ON>' ");
        return 0;
    }
    else if(argc > 4){
        printf("Programin calisabilmesi icin 4 adet arguman girisi yapmalisiniz ! \n'MyProgram <CSV DosyaAdi> <json DosyaAdÝ> <header=ON>' ");
        return 0;
    }

        FILE *CSVfile=fopen(input_file, "r");
        FILE *JSONfile= fopen(output_file,"w");

        if(CSVfile==NULL)
        {
            printf("Dosya okuma iþlemi baþarýsýz!");
            exit(1);

        }
        else
        {
             ConvertCSVtoJSON(argc,argv);

        }

return 0;

}
