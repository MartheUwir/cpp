void removeX(char *input) {
    if (input[0] == '\0')
        return;

    if (input[0] == 'x') {
        memmove(input, input + 1, strlen(input + 1) + 1);
        removeX(input);
    } else {
        removeX(input + 1);
    }
}==============================

void removeX(char input[]) {
    if (input[0] == '\0')
        return;

    removeX(input+1);

    if (input[0] == 'x') {
        strcpy(input, input+1);
        removeX(input);
    }

}