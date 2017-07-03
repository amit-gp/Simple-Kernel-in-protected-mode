void main()
{
    unsigned char backgroundColour = 0x06;
    unsigned char foregroundColour = 0x00;
    unsigned char colour = ((backgroundColour << 4) & 0xF0 | (foregroundColour & 0x0F));
    unsigned short* displayMemoryPointer = (unsigned short*)0xB8000;
    unsigned int displaySize = 2000;
    unsigned int i = 0;

    while (i < displaySize)
    {
        displayMemoryPointer[i++] = (((unsigned short)colour) << 8) | 0x00;
    }

    i = 0x0F000000;
    while (i--)
    {
        ;
    }
}
