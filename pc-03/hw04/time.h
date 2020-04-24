class TIME {
    private:
        int h, m ,s;
    public:
        void Input();
        void Output();
        TIME();
        TIME(const int &, const int &, const int &);
        TIME (const TIME &);
        ~TIME();
        void Inc();
        void Dec();
};