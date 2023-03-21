int solution(string my_string) {
    int answer = 0;
    
    vector<string> v;
    string value;
    string op;
    stringstream stream(my_string);

    while(stream >> value) {
        try {
            if (stoi(value) >= 0 && stoi(value) <= 20000) v.push_back(value);
        }
        catch(...) {
            op = value;
        }
    }

    if (op == "+") {
        for (int i = 0; i < v.size(); i++) {
            answer += stoi(v[i]);
        }
    }
    else {
        for (int i = 0; i < v.size(); i++) {
            answer -= stoi(v[i]);
        }
    }

    return answer;
}