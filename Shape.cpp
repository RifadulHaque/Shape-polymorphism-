#include <iostream>
using namespace std;
#include <string>

//Shape is for 2D shapes that has lenghth and width
//Shape is a pure virtual class
class Shape{
  
  protected:
     int width,length;
     double radius;
     
       
  public:
     virtual double getArea()=0;

     //Setters and getters
    
     void setWidth(int w){
        width=w;
     }

    
     void setRadius(double r){
        radius=r;
     }

     void setLength(int l){
        length=l;
     }
 
};

//Shape3D is for 3D shapes that has length, width and volume
class Shape3D:public Shape{

  protected:
     int height;

  public:
     virtual double getVolume()=0;

     void setHeight(int h){
        height=h;
     }



};

class Circle: public Shape{
    
    public:
     double getArea(){
         return (3.14*radius * radius);
     }

};

class Square: public Shape{
    
    public:
     double getArea(){
         return (width * length);
     }
   
};

class Sphere: public Shape3D{
    
    public:
     double getArea(){
         return(0.00);
     }
     double getVolume(){
         return (4/3 * radius * radius * radius * 3.14);
     }
   
};

class Cube: public Shape3D{
    
    public:
    double getArea(){
         return(width * height);
     }
     double getVolume(){
         return (width * height *length);
     }
   
};

class Cylinder: public Shape3D{
    public:
     double getVolume(){
         return (radius * height * radius * 3.14);
     }
     
     double getArea(){
         return(3.14 * radius * radius);
     }
};



int main(void){
     
     

     int input;
     string name;
     
     

    //dynamic objects
     Shape * s;
     Shape3D * s2;
     
    do{

        cout<<"Please select your choice:\n1. Circle\n2. Cylinder\n3. Sphere\n4. Square\n5. Cube\n6. Exit"<<endl;
        cout<<"Input: ";
        cin>>input;

       

     if (input==1){

         cout<<"Name :";
         cin>>name;

         s=new Circle();
         s->setRadius(5);
         cout<<"Area :"<<s->getArea()<<endl;
         
        }if(input==4){

             cout<<"Name :";
             cin>>name;
             s=new Square();
             s->setWidth(5);
             s->setLength(2);
             cout<<"Area :"<<s->getArea()<<endl;
             
        }if(input==2){

             cout<<"Name :";
             cin>>name;
             s2=new Cylinder();
             s2-> setRadius(3);
             s2-> setHeight(7);
             cout<<"Area :"<<s2->getArea()<<endl;
             cout<<"Volume :"<<s2->getVolume()<<endl;
            
         }if(input==3){

             cout<<"Name :";
             cin>>name;
             s2=new Sphere();
             s2-> setRadius(11);
             cout<<"Volume :"<<s2->getVolume()<<endl;
             
         }if(input==5){

             cout<<"Name :";
             cin>>name;
             s2=new Cube();
             s2->setWidth(1);
             s2->setHeight(3);
             s2->setLength(7);
             cout<<"Volume :"<<s2->getVolume()<<endl;
             
         }if(input ==6){
             exit(0);
             break;
         }

    
    }while(input <= 6);

    return 0;
}