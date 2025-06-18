vector<string> helloWorld(int N) {
    vector<string> answer;

    for (int i = 1; i <= N; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            answer.push_back("HelloWorld");
        }

        else if (i % 3 == 0 && i % 5 != 0) {
            answer.push_back("Hello");
        }  

        else if (i % 5 == 0 && i % 3 != 0) {
            answer.push_back("World");
        }

        else {
            answer.push_back(to_string(i));
        }

    }

    return answer;
}
