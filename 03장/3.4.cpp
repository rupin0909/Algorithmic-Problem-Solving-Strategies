//[1, n]범위의 자연수 x에 대해 x*1.0/x==1인 x의 수를 센다
int countObvicous(int n){
    int same = 0;
    for(int x = 1; x <= n; ++x){
        double y = 1.0 / x;
        if(y * x == 1.0)
            ++same;
    }
    return same;
}