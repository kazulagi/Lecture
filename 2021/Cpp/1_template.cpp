# include<iostream>

template<typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    int ia = 1;
    int ib = 2;
    int ic = 0;

    float fa = 1.1;
    float fb = 2.2;
    float fc = 0.0;

    ic = add(ia, ib);
    std::cout << ic << std::endl;
    
    fc = add(fa, fb);
    std::cout << fc << std::endl;
    
    return 0;
}