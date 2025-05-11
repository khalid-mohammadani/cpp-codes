#include<iostream>
using namespace std;

char toLower(char c);
char toLower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

void myl(const char*,int &size);
void myl(const char* source,int &size)
{
    size=0;
    while (source[size]!='\0')
        size++;
}
bool isVowel(char);
bool isVowel(char inputC)
{
     if(inputC == 'a' || inputC == 'A' || inputC == 'e' || inputC == 'E' 
        || inputC == 'i' || inputC == 'I' || inputC == 'o' || inputC == 'O'
        || inputC =='u'|| inputC =='U')      
        return true; 
    else
        return false;
}

void strrev1(const char*,char*);
void strrev1(const char* source, char* dest){
    int size=0;
    while(source[size]!='\0')
        size++;

    for(int i=size-1,j=0;i>=0;i--,j++)
        dest[j]=source[i];    
    dest[size]='\0';
}

bool isTwin(char [],char []);
bool isTwin(char first[],char second[])
{
    int firstLen = 0, secondLen = 0;
    while (first[firstLen] != '\0') firstLen++;
    while (second[secondLen] != '\0') secondLen++;

    // sort first array
    for (int i = 0; i < firstLen - 1; i++) {
        for (int j = 0; j < firstLen - i - 1; j++) {
            if (toLower(first[j]) > toLower(first[j + 1])) {
                char temp = first[j];
                first[j] = first[j + 1];
                first[j + 1] = temp;
            }
        }
    }

    // sort second array
    for (int i = 0; i < secondLen - 1; i++) {
        for (int j = 0; j < secondLen - i - 1; j++) {
            if (toLower(second[j]) > toLower(second[j + 1])) {
                char temp = second[j];
                second[j] = second[j + 1];
                second[j + 1] = temp;
            }
        }
    }

    // check equality
    bool isSame = true;
    if (firstLen != secondLen)
        isSame = false;
    else {
        for (int i = 0; i < firstLen; i++) {
            if (toLower(first[i]) != toLower(second[i])) {
                isSame = false;
                break;
            }
        }
    }

    cout << "Sorted first : " << first << endl;
    cout << "Sorted second: " << second << endl;
    return isSame;
}

int main()
{
    /*
    char c='A';
    cout << "This is "<<c;
    printf(" ASCII %d ",c);
    cout<<static_cast<int>(c);
    c='Z';
    cout << "\nThis is "<<c;
    printf(" ASCII %d ",c);
    cout<<(int)c<<endl;
 

    char word[20];
    word[0]= 'H';
    word[1]= 'e';
    word[2]= 'l';
    word[3]= 'l';
    word[4]= 'o';
    word[5]='\0';   
    
    printf(" - %s",word);
    cout<<word<<endl;
  */
    /*

    char inputC[50];
    cout<<"Enter first word:";
    cin>>inputC;            // cin.getline(inputC,50); latter i need this 
    cout<<"You entered:"<<inputC<<endl;
    int i=0;
    while(inputC[i]!='\0')
        i++;
    cout<<"You entered total = "<<i<<" char"<<endl;

*/
/*
    char inputC[50],findC;
    cout<<"Enter max 50 character without space :";
    cin>>inputC;          
    cout<<"You entered:"<<inputC<<endl;
    cout<<"Enter one character to search:";
    cin>>findC;          
    
    int i=0,countOccurance=0;
    while(inputC[i]!='\0')
    {
        if(inputC[i]==findC)
            countOccurance++;
        i++;
    }
    cout<<"You entered total = "<<i<<" char"<<endl;
    cout<<"Character '"<<findC<<"' occurs "<<countOccurance<<" times."<<endl;
*/
  
          /*

    cout<<"count how many times a specific character appears :";
    char inputC[50],findC;
    cout<<"Enter max 50 character :";
    cin.getline(inputC,50);          
    cout<<"You entered:"<<inputC<<endl;
    cout<<"Enter one character to search:";
    cin>>findC;          
    
    int i=0,countOccurance=0;
    while(inputC[i]!='\0')
    {
        if(inputC[i]==findC)
            countOccurance++;
        i++;
    }
    cout<<"You entered total = "<<i<<" char"<<endl;
    cout<<"Character '"<<findC<<"' occurs "<<countOccurance<<" times."<<endl;
*/

              /*

    cout << "Reverse char array string manually:\n";
    char inputC[50], reverse[50];

    cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int length = 0;
    while (inputC[length] != '\0') {
        length++;
    }

    int z = 0;
    for (int i = length - 1; i >= 0; i--, z++) {
        reverse[z] = inputC[i];
    }
    reverse[z] = '\0'; // Null terminator
    cout << "Reversed string: " << reverse << endl;

    */

                  /*

    cout << "Remove space from input text:\n";
    char inputC[50], noSpc[50];

    cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int length = 0,nosp=0;

    while (inputC[length] != '\0') {
        if(static_cast<int>(inputC[length])!=32)
        {
            noSpc[nosp]=inputC[length];
            nosp++;
        }
        length++;
    }
    noSpc[nosp] = '\0';
    cout << "Remove space from text: " << noSpc << endl;

*/
   
/*
    cout << "check palindrome word:\n";
    char inputC[50], reverse[50];

    cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int length = 0;
    while (inputC[length] != '\0') {
        length++;
    }

    int left=0,right=length-1;
    bool check=false;
    for (int z = 0; z <length; z++) {
        if(inputC[left] != inputC[right])
        {
            check=false;
            break;
        }
        check=true;    
        left++;
        right--;
    }
    if(check)
        cout << "You Entered a palindrome: " << endl;
    else
        cout << "No palindrome: " << endl;
 */

 /*
  
   cout << "Reverse char array string manually:\n";
   char inputC[50], reverse[50];

   cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int z = 0,length;
    myl(inputC, length);
    for (int i = length - 1; i >= 0; i--, z++) {
        reverse[z] = inputC[i];
    }
    reverse[z] = '\0'; // Null terminator
    cout << "Reversed string: " << reverse << endl;
    
    int ch = 0;
    bool b=true;
    while (inputC[ch] != '\0') {
        if(reverse[ch]!=inputC[ch])
            b=false;
        ch++;
    }
    if(b)
        cout << "correct You Entered a palindrome: " << endl;
    else
        cout << "No palindrome: " << endl;
  
        */
        
/*
    cout << "check palindrome word:\n";
    char inputC[50];

    cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int i=0,vCount=0,firstInLength;
    while (inputC[i]!='\0')
    {

       if(isVowel(inputC[i]))
         vCount++;
        
        int cap=static_cast<int>(inputC[i]);
        
        if(cap>=97 && cap<=122)      //; 65-90 97-122
             inputC[i]=static_cast<char>((static_cast<int>(inputC[i])-32));
        i++;
    }
    firstInLength=i;
        cout << "\nit has total vowels: "<<vCount<< endl;

        char a='A',b1='b';
        cout<<"its small is "<<static_cast<char>((static_cast<int>(a)+32))<<endl;
        cout<<"its small is "<<static_cast<char>((static_cast<int>(b1)-32))<<endl;
        cout<<"ALL Capital "<<inputC<<endl;

    int ii=0,cCount=0;
    while (inputC[ii]!='\0')
    {
        int cap=static_cast<int>(inputC[ii]);

        if (((cap >= 65 && cap <= 90) || (cap >= 97 && cap <= 122)) && !isVowel(inputC[ii]))
            cCount++;

        if(cap>=65 && cap<=90)   
             inputC[ii]=static_cast<char>((static_cast<int>(inputC[ii])+32));
        ii++;
    }
        cout << "\nit has total consonants: "<<cCount<< endl;

    cout<<"ALL Lower "<<inputC<<endl;
        
    int f=0;
    bool sp=false;
    do{
        int cap=static_cast<int>(inputC[f]);
        if(cap==32)
            sp=true;
        else if(sp==true || f==0)
        {     
            inputC[f]=static_cast<char>((static_cast<int>(inputC[f])-32));
            sp=false;   
        }
        f++;
    }while (inputC[f]!='\0');
    cout<<"\nCaptial Each Word: "<<inputC<<endl;
 
    char onlyCons[50];
    int cons=0;
    for (int i =0; i<=firstInLength; i++)
    {
        if (!isVowel(inputC[i]))
        {
            onlyCons[cons++]=inputC[i];
        }
    }
    onlyCons[cons] = '\0';
    cout << "\n All consonants: "<<onlyCons<< endl;
*/
/*
    cout << "remove duplicat char:\n";
    char inputC[50];

    cout << "Enter max 50 character: ";
    cin.getline(inputC, 50);
    cout << "You entered: " << inputC << endl;

    int length = 0;
    while (inputC[length] != '\0') {
        length++;
    }

    char sortInput[50];
    for (int pass = 0; pass < length - 1; pass++) {
        for (int i = 0; i < length - pass - 1; i++) {
            if (inputC[i] > inputC[i+1]) {
                char temp = inputC[i];
                inputC[i] = inputC[i+1];
                inputC[i+1] = temp;
            }
        }
    }

    char remDup[50];
    remDup[0] = inputC[0];
    int rem = 1;
    for (int pass = 1; pass < length; pass++) {      
        if (inputC[pass] != inputC[pass - 1]) {
            int cap = static_cast<int>(inputC[pass]);
            if ((cap >= 65 && cap <= 90) || (cap >= 97 && cap <= 122))
                remDup[rem++] = inputC[pass];
        }
    }
    remDup[rem] = '\0';
    cout << "\n remove duplicate characters : "<<remDup<< endl;
*/

/*

    cout<<"replace specific character with another in char array:\n";
    char inputR[50],chF,chR; 
    cout<<"Enter input: ";
    cin.getline(inputR,50);
    cout<<"which character want to replace: ";
    cin>>chF;
    cout<<"with : ";
    cin>>chR;
    
    int i=0;
    while(inputR[i]!='\0'){

        if(inputR[i]==chF)
        {
            inputR[i]=chR;
        }
        i++;
    }    
    
    cout<<"Replace "<<chF<<" with "<<chR<<" : "<<inputR<<"  done!";
*/
/*
    //count frequency of all characters in char array
    cout<<"Input:";
    char in[50];
    cin.getline(in,50);

    int freq[256]={0};
    int i=0;
    while(in[i]!='\0'){
       freq[static_cast<unsigned char>(in[i])]++;
       i++;
    }
    for (int i = 0; in[i] != '\0'; i++) {
        if (freq[static_cast<unsigned char>(in[i])] == 1) {
            cout << "Output: " << in[i] << " (first non-repeating char)" << endl;
            break;
        }
    }
*/

/*
    //make own strcat
    char input1[50],input2[50],concatC2[100];
    cout<<"Enter 1st string:";
    cin.getline(input1,50);
    cout<<"Enter 2nd string:";
    cin.getline(input2,50);


    int lenght1=0,length2=0;
    while(input1[lenght1]!='\0'){
        concatC2[lenght1]=input1[lenght1];
        lenght1++;
    }
    
    concatC2[lenght1++]=' ';
    while(input2[length2]!='\0'){
        concatC2[lenght1++]=input2[length2];
        length2++;
    }
    concatC2[lenght1]='\0';
    cout<<"\nafter concatenates string:"<<concatC2;
    */
//////////////////////
/*
    char first[]="Jerry";
    char second[]="Jerry";
    int z=0,length=0;
    for(z=0; first[z]!='\0'; z++)
    {
        first[static_cast<unsigned char>(first[z])]=first[z];
        cout<<first[z];
    }
    length=z;
    cout<<"\n";
    bool match=false;
    for(int x=0; first[x]!='\0'; x++)
    {
        if(first[x]==second[x])
        {
            cout<<first[x];
            z--;
        }
        else
         {  
            z--;
            break;
        }
    }
    cout<<"\n"<<z<<"\n";
    if(z==0)
        cout<<"identical string";
    else{
        cout<<"no identical string ";
    }
  */  
    /////
/*
    char pos[]="Working with string is fun!";
    cout<<pos<<" = ";
    int i=0;
    while(pos[i]!='\0'){
        i++;
    }
    cout<<" = total lenght "<<i<<endl;
    int p=0,ii=0;
    cout<<"Enter position 1-9 extract text:";
    cin>>p;

    while(ii<p){
        cout<<pos[ii+(p-1)];
        ii++;
    }

cout<<"\n";

    char pos1[]="ABCD";
    char rev[50];
    int i1=0;
    strrev1(pos1, rev);
    cout<<pos1<<" = "<<rev;
*/
/////////
    char first[] = "Lookout";
    char second[] = "lookout";

    if (isTwin(first,second))
        cout << "Result: true (same letters alphabetically)" << endl;
    else
        cout << "Result: false (different letters)" << endl;

    return 0;
}


