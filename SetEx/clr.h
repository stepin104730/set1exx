#ifndef CLR_H_INCLUDED
#define CLR_H_INCLUDED

enum  Color_t{red,blue,green};

class Color{

           int m_r,m_g,m_b;
    public:
            enum  Color_t{red,blue,green,orange,black};
            Color();
            Color(int,int,int);
            Color(int);
            Color(Color_t);
            void invert();
            void display();


};


#endif // CLR_H_INCLUDED
