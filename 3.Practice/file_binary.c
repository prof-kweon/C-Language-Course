#include <stdio.h>

struct Data {
    char c;
    int i;
    float f;
};

int writeFile() {
    FILE *fp = fopen("data.bin", "wb");  // "wb" = write binary

    if (fp == NULL) {
        perror("Fail to open\n");
        return 1;
    }

    struct Data d = { 'A', 100, 3.14f };

    // save binary of structure
    fwrite(&d, sizeof(struct Data), 1, fp);

    fclose(fp);
    printf("Complete writing.\n");
    return 0;
}

int readFile() {
    FILE *fp = fopen("data.bin", "rb");  // "rb" = read binary

    if (fp == NULL) {
        perror("Fail to open\n");
        return 1;
    }

    struct Data d;

    // read binary of structure
    fread(&d, sizeof(struct Data), 1, fp);

    printf("[read data]\n");
    printf("\tchar: %c\n", d.c);
    printf("\tint: %d\n", d.i);
    printf("\tfloat: %.2f\n", d.f);

    fclose(fp);
    return 0;
}

void main()
{
    int ret = writeFile();
    if(ret == 0){
        ret = readFile();

        if(ret == 0){
            printf("SUCCESS!!");
        } else {
            printf("FAIL!!");
        }
    }
    
}