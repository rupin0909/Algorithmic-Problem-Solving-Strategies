//a가 b의 진부분집합이면 true, 아니면 false를 반환한다.
bool isProperSubset(const IntegerSet& a, const IntegerSet& b);
//a가 b의 진부분집합일 때 a가 항상 앞에 오도록 집합들을 정렬한다.
bool operator < (const IntegerSet& a, const IntegerSet& b){
    //a가 b의 진부분집합이면 a가 앞에 와야 한다.
    if(isProperSubset(a, b)) return true;
    //b가 a의 진부분집합이면 b가 앞에 와야 한다.
    if(isProperSubset(b, a)) return false;
    //a가 꼭 앞에 올 필요도 없고 b가 꼭 앞에 올 필요도 없다.
    return false;
}
