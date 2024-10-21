class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    private:
    double x; 
    double y;
    public:
    Wektor2D()
    {x=0;
    y=0;}
    Wektor2D(double X,double Y)
    {x=X;
    y=Y;}
    void setX(double X)
    {x=X;}
     void setY(double Y)
    {y=Y;}
    double getX()
    {return x;}
    double getY()
    {return y;}
    
};
Wektor2D operator+(Wektor2D v1,Wektor2D v2)
    {
        //double x1,x2,y1,y2;
        //x1=getX(v1)
        return Wektor2D(v1.getX() + v2.getX(),v1.getY()+v2.getY());
    }
double operator*(Wektor2D v1,Wektor2D v2)
    {
        double ix,iy;
        return (v1.getX()*v2.getX()+iy)*(v1.getY()*v2.getY());
    }
    