int isPrime(int num) {
    if (num == 1 || num ==2) return 1;
    else if (num > 2 ) {
        for (int i = 2; i*i<=num; i++) {
            if (num % i == 0) {
                return 0;
                break;
            }
            else return 1;
        }
    }
    else return 0;
    return 0;
}