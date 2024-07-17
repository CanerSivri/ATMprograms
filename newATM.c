#include <stdio.h>

int main(){
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    int notes[] = {200, 100, 50, 20, 10, 5, 1};
    int notesCount[7] = {0};
    int atmNotes[] = {9999, 9999, 9999, 9999, 9999, 9999, 9999};  
    
    for(int i = 0; i < 7; i++){
        if(amount >= notes[i]){
            notesCount[i] = amount / notes[i];
            if(notesCount[i] > atmNotes[i]){
                notesCount[i] = atmNotes[i];  
            }
            amount -= notesCount[i] * notes[i];
            atmNotes[i] -= notesCount[i];
        }
    }

    printf("\nWithdrawal details:\n");
    for(int i = 0; i < 7; i++){
        if(notesCount[i] != 0){
            printf("%d notes of %d\n", notesCount[i], notes[i]);
        }
    }

    printf("\nATM remaining notes:\n");
    for(int i = 0; i < 7; i++){
        printf("%d notes of %d\n", atmNotes[i], notes[i]);
    }

    system("pause");
    return 0;
}
