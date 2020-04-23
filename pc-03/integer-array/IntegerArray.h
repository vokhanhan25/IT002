class IntegerArray {
    private:
        int *m_pElement;
        int m_iLength;
    public:
        IntegerArray(int );
        int GetLength ();
        int &ElementAt (int );
        int &operator[] (int );
        virtual ~IntegerArray();
        IntegerArray(const IntegerArray &);
        IntegerArray &operator = (const IntegerArray &);
};