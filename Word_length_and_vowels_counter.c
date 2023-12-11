#include <stdio.h>
#include <string.h>

int main() {
    int num_words;
    char words[10][50];
    char smallest_word[50];
    char largest_word[50];
    int min_vowels = -1;
    int max_vowels = -1;

    printf("Enter the number of words: ");
    scanf("%d", &num_words);
    printf("\n");

    for (int i = 0; i < num_words; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);

        int vowels_count = 0;
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (strchr("AEIOUaeiou", words[i][j]) != NULL) {
                vowels_count++;
            }
        }

        if (vowels_count > max_vowels) {
            max_vowels = vowels_count;
            strcpy(largest_word, words[i]);
        }

        if (vowels_count < min_vowels || min_vowels == -1) {
            min_vowels = vowels_count;
            strcpy(smallest_word, words[i]);
        }
    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    printf("Number of vowels in smallest word: %d\n", min_vowels);
    printf("Number of vowels in largest word: %d\n", max_vowels);

    return 0;
}
