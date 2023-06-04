char operation = '+';

    for (char c : change_s) {
        if (c == '+' || c == '-') operation = c;
        else {
            int number = c-'0';

            if (operation == '+') answer += number;
            else if (operation == '-') answer -= number;
        }
    }