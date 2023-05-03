void removeX(char input[]) {
    if (input[0] == '\0')
        return;

    removeX(input+1);

    if (input[0] == 'x') {
        strcpy(input, input+1);
        removeX(input);
    }

}
======================================
void removeX(char *input) {
    char *p = input;
    while ((*p = *input++) != '\0') {
        if (*p != 'x')
            p++;
    }
}
============================
void removeX(char *input) {
    if (input[0] == '\0')
        return;

    if (input[0] == 'x') {
        memmove(input, input + 1, strlen(input + 1) + 1);
        removeX(input);
    } else {
        removeX(input + 1);
    }
}