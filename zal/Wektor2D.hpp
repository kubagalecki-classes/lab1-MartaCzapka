class Wektor2D
{
   public:
    void   setX(double wspol1) { x = wspol1; }
    double getX() { return x; }
    void   setY(double wspol2) { y = wspol2; }
    double getY() { return y; }
    Wektor2D() {}
    Wektor2D(double wspol1, double wspol2)
    {
        x = wspol1;
        y = wspol2;
    }

    ~Wektor2D() {}
    Wektor2D operator+(Wektor2D& wekt1)
    {
        Wektor2D suma;
        suma.setX(this->getX() + wekt1.getX());
        suma.setY(this->getY() + wekt1.getY());
        return suma;
    }
    double operator*(Wektor2D& wekt1)
    {
        double a;
        a = this->getX() * wekt1.getX() + this->getY() * wekt1.getY();
        return a;
    }

private:
    double x;
    double y;
};
