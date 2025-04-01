#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate string length (alternative to strlen)
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to remove newline character
void removeNewline(char *str) {
    int len = stringLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Function to tokenizes the input string and extracts values into separate variables
void parseInput(const char *input, int *age, float *height, char *name, char *gender, char *introduction) {
    char buffer[200]; // Copy input to avoid modifying original string
    strncpy(buffer, input, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';  // Ensure null termination

    char *token = strtok(buffer, " ");  // First token (age)
    if (token) *age = atoi(token);
    
    token = strtok(NULL, " ");  // Second token (height)
    if (token) *height = atof(token);
    
    token = strtok(NULL, " ");  // Third token (name)
    if (token) strncpy(name, token, 49);
    name[49] = '\0'; // Null-terminate the name
    
    token = strtok(NULL, " ");  // Fourth token (gender)
    if (token) *gender = token[0];
    
    token = strtok(NULL, "");  // Remainder as introduction
    if (token) strncpy(introduction, token, 99);
    introduction[99] = '\0'; // Null-terminate the introduction
}

/****************************************************** */
int method1(){
    int age;
    float height;    
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 1 (scanf: input seperately) ====================\n");

    printf("Enter age: ");
    scanf("%d", &age);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter height: ");
    scanf("%f", &height); // This is not valid for scanf
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter name: ");
    scanf("%s", name);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter gender: ");
    scanf("%c", &gender);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter introduction: ");
    scanf("%s", introduction);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("[RESULT] Age: %d, Height: %.2f, Name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);

    return 0;
}

/****************************************************** */
int method2(){
    int age;
    float height;    
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 2 (scanf: input together) ====================\n");

    printf("Enter: age height name gender introduction => ");
    scanf("%d %f %s %c %s", &age, &height, name, &gender, introduction);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("[RESULT] Age: %d, Height: %.2f, name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);    
    return 0;    
}

/****************************************************** */
int method3(){
    char input[100];
    int age;
    float height;    
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 3 (fgets: input seperately) ====================\n");

    printf("Enter age: ");
    fgets(input, sizeof(input), stdin);
    removeNewline(input); // Remove newline characters remaining in the input buffer
    age = atoi(input);

    printf("Enter height: ");
    fgets(input, sizeof(input), stdin);
    removeNewline(input); // Remove newline characters remaining in the input buffer
    height = atof(input);

    printf("Enter name: ");
    fgets(input, sizeof(input), stdin);
    removeNewline(input); // Remove newline characters remaining in the input buffer
    strncpy(name, input, sizeof(name));

    printf("Enter gender: ");
    fgets(input, sizeof(input), stdin);
    removeNewline(input); // Remove newline characters remaining in the input buffer
    strncpy(&gender, input, sizeof(char));

    printf("Enter introduction: ");
    fgets(input, sizeof(input), stdin);
    removeNewline(input); // Remove newline characters remaining in the input buffer
    strncpy(introduction, input, sizeof(introduction));

    printf("[RESULT] Age: %d, Height: %.2f, name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);        
    return 0;    
}

/****************************************************** */
int method4(){
    char input[200];  
    int age;
    float height;    
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 4 (fgets: input together & sscanf) ====================\n");
    printf("Enter: age height name gender introduction => ");
    fgets(input, sizeof(input), stdin);

    // Parse the input
    // %[^X] => Reads input until it encounters the character X
    sscanf(input, "%d %f %49s %c %[^\n]", &age, &height, name, &gender, introduction);

    printf("[RESULT] Age: %d, Height: %.2f, name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);        
    return 0;    
}

/****************************************************** */
int method5(){
    char input[200];
    int age;
    float height;
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 5 (fget: input together & Tokenize) ====================\n");
    printf("Enter: age height name gender introduction => ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline
    input[strcspn(input, "\n")] = '\0';

    // Call function to parse input
    parseInput(input, &age, &height, name, &gender, introduction);

    printf("[RESULT] Age: %d, Height: %.2f, name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);  
    return 0;    
}

/****************************************************** */
int main() {
    /* Get age, height, name, gender, introduction */

    /* scanf */
    method1();
    method2();

    /* fgets */
    method3();
    method4();   

    /* Tokenize */
    method5();    
    return 0;
}
