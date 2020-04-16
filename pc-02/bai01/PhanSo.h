class PhanSo
{
    private:
        long tu, mau;
    
    public:
        void rf();
        void wf();
        PhanSo tong(const PhanSo &);
        PhanSo hieu(const PhanSo &);
        PhanSo tich(const PhanSo &);
        PhanSo thuong(const PhanSo &);
        float dinhGiaTri();
};
