int a=0,b=0;

int main(void)
{
    (a=0)&&(b=4); //Obie zmienne mają wartość 0 po wykonaniu wyrażenia.
    (a=4)&&(b=3); //Po wykonaniu wyrażenia zmienna a ma wartość 4,
    // a zmienna b wartość 3.
    (a=0)||(b=0); //Obie zmienne mają wartość 0 po wykonaniu wyrażenia.
    (a=3)||(b=4); //Po wykonaniu wyrażenia zmienna a ma wartość 3,
    //a zmienna b wartość 0.

    return 0;
}