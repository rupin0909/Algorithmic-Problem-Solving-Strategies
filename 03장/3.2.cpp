//a가 b의 진부분집합일 때 a가 항상 앞에 오도록 집합들을 정렬한다.
bool operator < (const IntegerSet& a, const IntegerSet& b){
    //a가 b의 진부분집합이면 a가 앞에 와야 한다.
    if(isProperSubset(a, b)) return true;
    //b가 a의 진부분집합이면 b가 앞에 와야 한다.
    if(isProperSubset(b, a)) return false;
    //a와 b의 크기가 다르다면 작은 쪽이 앞에 와야 한다.
    if(a.size() != b.size()) return a.size() < b.size();
    //a와 b를 사전순으로 비교해 반환한다.
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}