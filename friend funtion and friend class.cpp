// friend function 

class func{

    void show(){
        int value;

        friend void show(const print&) ;

        
    }

};
  void print(const show& v){
        cout << v.value;}
int main(){
func f(100);
print(f);
}
