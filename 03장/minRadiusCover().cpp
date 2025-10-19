double minRadiusCover(){
    double minRadius = 0, maxRadius = 10;
    //반복문 불변식 conCover(maxRadius) = true
    while(maxRadius - minRadius > 1e-10){
        double mid = (minRadius + maxRadius) / 2;
        if(conCover(mid))
            maxRadius = mid;
        else
            minRadius = mid;
    }
    return maxRadius;
}