union Color
{
    unsigned int rgba;
    struct
    {
        unsigned char r, g, b, a;
    } components;
};

int main()
{
    union Color color;
    color.rgba = 0xFF112233;

    printf("R: %d, G: %d, B: %d, A: %d\n", color.components.r, color.components.g, color.components.b, color.components.a);
    return 0;
}
