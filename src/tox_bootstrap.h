#ifndef TOX_BOOTSTRAP_H
#define TOX_BOOTSTRAP_H

//
// IMPORTANT: This file is generated by the /tools/update-bootstrap.py script, do not edit manually.
//

struct bootstrap_node {
    char *address;
    bool ipv6;
    uint16_t port_udp;
    uint16_t port_tcp;
    uint8_t key[32];
} bootstrap_nodes[] = {

    /* by dvor, NL */
    { "185.14.30.213", false, 443, 443,
        { 0x25, 0x55, 0x76, 0x3C, 0x8C, 0x46, 0x04, 0x95, 0xB1, 0x41, 0x57, 0xD2, 0x34, 0xDD, 0x56, 0xB8,
          0x63, 0x00, 0xA2, 0x39, 0x55, 0x54, 0xBC, 0xAE, 0x46, 0x21, 0xAC, 0x34, 0x5B, 0x8C, 0x1B, 0x1B, }
    },
    /* by dvor, NL */
    { "2a00:1ca8:a7::e8b", true, 443, 443,
        { 0x25, 0x55, 0x76, 0x3C, 0x8C, 0x46, 0x04, 0x95, 0xB1, 0x41, 0x57, 0xD2, 0x34, 0xDD, 0x56, 0xB8,
          0x63, 0x00, 0xA2, 0x39, 0x55, 0x54, 0xBC, 0xAE, 0x46, 0x21, 0xAC, 0x34, 0x5B, 0x8C, 0x1B, 0x1B, }
    },
    /* by CeBe, DE */
    { "136.243.141.187", false, 443, 443,
        { 0x6E, 0xE1, 0xFA, 0xDE, 0x9F, 0x55, 0xCC, 0x79, 0x38, 0x23, 0x4C, 0xC0, 0x7C, 0x86, 0x40, 0x81,
          0xFC, 0x60, 0x6D, 0x8F, 0xE7, 0xB7, 0x51, 0xED, 0xA2, 0x17, 0xF2, 0x68, 0xF1, 0x07, 0x8A, 0x39, }
    },
    /* by CeBe, DE */
    { "2a01:4f8:212:2459::a:1337", true, 443, 443,
        { 0x6E, 0xE1, 0xFA, 0xDE, 0x9F, 0x55, 0xCC, 0x79, 0x38, 0x23, 0x4C, 0xC0, 0x7C, 0x86, 0x40, 0x81,
          0xFC, 0x60, 0x6D, 0x8F, 0xE7, 0xB7, 0x51, 0xED, 0xA2, 0x17, 0xF2, 0x68, 0xF1, 0x07, 0x8A, 0x39, }
    },
    /* by pucetox, DE */
    { "148.251.23.146", false, 2306, 2306,
        { 0x7A, 0xED, 0x21, 0xF9, 0x4D, 0x82, 0xB0, 0x57, 0x74, 0xF6, 0x97, 0xB2, 0x09, 0x62, 0x8C, 0xD5,
          0xA9, 0xAD, 0x17, 0xE0, 0xC0, 0x73, 0xD9, 0x32, 0x90, 0x76, 0xA4, 0xC2, 0x8E, 0xD2, 0x81, 0x47, }
    },
    /* by pucetox, DE */
    { "2a01:4f8:201:8493::2", true, 2306, 2306,
        { 0x7A, 0xED, 0x21, 0xF9, 0x4D, 0x82, 0xB0, 0x57, 0x74, 0xF6, 0x97, 0xB2, 0x09, 0x62, 0x8C, 0xD5,
          0xA9, 0xAD, 0x17, 0xE0, 0xC0, 0x73, 0xD9, 0x32, 0x90, 0x76, 0xA4, 0xC2, 0x8E, 0xD2, 0x81, 0x47, }
    },
    /* by Cactus, RU */
    { "193.124.186.205", false, 5228, 33445,
        { 0x99, 0x06, 0xD6, 0x5F, 0x2A, 0x47, 0x51, 0x06, 0x8A, 0x59, 0xD3, 0x05, 0x05, 0xC5, 0xFC, 0x8A,
          0xE1, 0xA9, 0x5E, 0x08, 0x43, 0xAE, 0x93, 0x72, 0xEA, 0xFA, 0x3B, 0xAB, 0x6A, 0xC1, 0x6C, 0x2C, }
    },
    /* by Cactus, RU */
    { "2a02:f680:1:1100::542a", true, 5228, 33445,
        { 0x99, 0x06, 0xD6, 0x5F, 0x2A, 0x47, 0x51, 0x06, 0x8A, 0x59, 0xD3, 0x05, 0x05, 0xC5, 0xFC, 0x8A,
          0xE1, 0xA9, 0x5E, 0x08, 0x43, 0xAE, 0x93, 0x72, 0xEA, 0xFA, 0x3B, 0xAB, 0x6A, 0xC1, 0x6C, 0x2C, }
    },
    /* by Manolis, DE */
    { "130.133.110.14", false, 33445, 33445,
        { 0x46, 0x1F, 0xA3, 0x77, 0x6E, 0xF0, 0xFA, 0x65, 0x5F, 0x1A, 0x05, 0x47, 0x7D, 0xF1, 0xB3, 0xB6,
          0x14, 0xF7, 0xD6, 0xB1, 0x24, 0xF7, 0xDB, 0x1D, 0xD4, 0xFE, 0x3C, 0x08, 0xB0, 0x3B, 0x64, 0x0F, }
    },
    /* by Manolis, DE */
    { "2001:6f8:1c3c:babe::14:1", true, 33445, 33445,
        { 0x46, 0x1F, 0xA3, 0x77, 0x6E, 0xF0, 0xFA, 0x65, 0x5F, 0x1A, 0x05, 0x47, 0x7D, 0xF1, 0xB3, 0xB6,
          0x14, 0xF7, 0xD6, 0xB1, 0x24, 0xF7, 0xDB, 0x1D, 0xD4, 0xFE, 0x3C, 0x08, 0xB0, 0x3B, 0x64, 0x0F, }
    },
    /* by fluke571, SI */
    { "194.249.212.109", false, 33445, 33445,
        { 0x3C, 0xEE, 0x1F, 0x05, 0x40, 0x81, 0xE7, 0xA0, 0x11, 0x23, 0x48, 0x83, 0xBC, 0x4F, 0xC3, 0x9F,
          0x66, 0x1A, 0x55, 0xB7, 0x36, 0x37, 0xA5, 0xAC, 0x29, 0x3D, 0xDF, 0x12, 0x51, 0xD9, 0x43, 0x2B, }
    },
    /* by fluke571, SI */
    { "2001:1470:fbfe::109", true, 33445, 33445,
        { 0x3C, 0xEE, 0x1F, 0x05, 0x40, 0x81, 0xE7, 0xA0, 0x11, 0x23, 0x48, 0x83, 0xBC, 0x4F, 0xC3, 0x9F,
          0x66, 0x1A, 0x55, 0xB7, 0x36, 0x37, 0xA5, 0xAC, 0x29, 0x3D, 0xDF, 0x12, 0x51, 0xD9, 0x43, 0x2B, }
    },
    /* by ru_maniac, US */
    { "104.223.122.15", false, 33445, 3389,
        { 0x0F, 0xB9, 0x6E, 0xEB, 0xFB, 0x16, 0x50, 0xDD, 0xB5, 0x2E, 0x70, 0xCF, 0x77, 0x3D, 0xDF, 0xCA,
          0xBE, 0x25, 0xA9, 0x5C, 0xC3, 0xBB, 0x50, 0xFC, 0x25, 0x10, 0x82, 0xE4, 0xB6, 0x3E, 0xF8, 0x2A, }
    },
    /* by ru_maniac, US */
    { "2607:ff48:aa81:800::35eb:1", true, 33445, 3389,
        { 0x0F, 0xB9, 0x6E, 0xEB, 0xFB, 0x16, 0x50, 0xDD, 0xB5, 0x2E, 0x70, 0xCF, 0x77, 0x3D, 0xDF, 0xCA,
          0xBE, 0x25, 0xA9, 0x5C, 0xC3, 0xBB, 0x50, 0xFC, 0x25, 0x10, 0x82, 0xE4, 0xB6, 0x3E, 0xF8, 0x2A, }
    },
    /* by a68366, FR */
    { "51.254.84.212", false, 33445, 33445,
        { 0xAE, 0xC2, 0x04, 0xB9, 0xA4, 0x50, 0x14, 0x12, 0xD5, 0xF0, 0xBB, 0x67, 0xD9, 0xC8, 0x1B, 0x5D,
          0xB3, 0xEE, 0x6A, 0xDA, 0x64, 0x12, 0x2D, 0x32, 0xA3, 0xE9, 0xB0, 0x93, 0xD5, 0x44, 0x32, 0x7D, }
    },
    /* by a68366, FR */
    { "2001:41d0:a:1a3b::18", true, 33445, 33445,
        { 0xAE, 0xC2, 0x04, 0xB9, 0xA4, 0x50, 0x14, 0x12, 0xD5, 0xF0, 0xBB, 0x67, 0xD9, 0xC8, 0x1B, 0x5D,
          0xB3, 0xEE, 0x6A, 0xDA, 0x64, 0x12, 0x2D, 0x32, 0xA3, 0xE9, 0xB0, 0x93, 0xD5, 0x44, 0x32, 0x7D, }
    },
    /* by ru_maniac, RU */
    { "185.58.206.164", false, 33445, 33445,
        { 0x24, 0x15, 0x64, 0x72, 0x04, 0x1E, 0x5F, 0x22, 0x0D, 0x1F, 0xA1, 0x1D, 0x9D, 0xF3, 0x2F, 0x7A,
          0xD6, 0x97, 0xD5, 0x98, 0x45, 0x70, 0x1C, 0xDD, 0x7B, 0xE7, 0xD1, 0x78, 0x5E, 0xB9, 0xDB, 0x39, }
    },
    /* by ru_maniac, RU */
    { "2a02:f680:1:1100::3313", true, 33445, 33445,
        { 0x24, 0x15, 0x64, 0x72, 0x04, 0x1E, 0x5F, 0x22, 0x0D, 0x1F, 0xA1, 0x1D, 0x9D, 0xF3, 0x2F, 0x7A,
          0xD6, 0x97, 0xD5, 0x98, 0x45, 0x70, 0x1C, 0xDD, 0x7B, 0xE7, 0xD1, 0x78, 0x5E, 0xB9, 0xDB, 0x39, }
    },
    /* by strngr, UA */
    { "195.93.190.6", false, 33445, 33445,
        { 0xFB, 0x4C, 0xE0, 0xDD, 0xEF, 0xEE, 0xD4, 0x5F, 0x26, 0x91, 0x70, 0x53, 0xE5, 0xD2, 0x4B, 0xDD,
          0xA0, 0xFA, 0x0A, 0x3D, 0x83, 0xA6, 0x72, 0xA9, 0xDA, 0x23, 0x75, 0x92, 0x8B, 0x37, 0x02, 0x3D, }
    },
    /* by strngr, UA */
    { "2a01:d0:ffff:a8a::2", true, 33445, 33445,
        { 0xFB, 0x4C, 0xE0, 0xDD, 0xEF, 0xEE, 0xD4, 0x5F, 0x26, 0x91, 0x70, 0x53, 0xE5, 0xD2, 0x4B, 0xDD,
          0xA0, 0xFA, 0x0A, 0x3D, 0x83, 0xA6, 0x72, 0xA9, 0xDA, 0x23, 0x75, 0x92, 0x8B, 0x37, 0x02, 0x3D, }
    },
    /* by HooinKyoma, SE */
    { "95.215.44.78", false, 33445, 3389,
        { 0x67, 0x2D, 0xBE, 0x27, 0xB4, 0xAD, 0xB9, 0xD5, 0xFB, 0x10, 0x5A, 0x6B, 0xB6, 0x48, 0xB2, 0xF8,
          0xFD, 0xB8, 0x9B, 0x33, 0x23, 0x48, 0x6A, 0x7A, 0x21, 0x96, 0x83, 0x16, 0xE0, 0x12, 0x02, 0x3C, }
    },
    /* by HooinKyoma, SE */
    { "2a02:7aa0:1619::c6fe:d0cb", true, 33445, 3389,
        { 0x67, 0x2D, 0xBE, 0x27, 0xB4, 0xAD, 0xB9, 0xD5, 0xFB, 0x10, 0x5A, 0x6B, 0xB6, 0x48, 0xB2, 0xF8,
          0xFD, 0xB8, 0x9B, 0x33, 0x23, 0x48, 0x6A, 0x7A, 0x21, 0x96, 0x83, 0x16, 0xE0, 0x12, 0x02, 0x3C, }
    },
    /* by LittleVulpix, FR */
    { "163.172.136.118", false, 33445, 3389,
        { 0x2C, 0x28, 0x9F, 0x9F, 0x37, 0xC2, 0x0D, 0x09, 0xDA, 0x83, 0x56, 0x55, 0x88, 0xBF, 0x49, 0x6F,
          0xAB, 0x37, 0x64, 0x85, 0x3F, 0xA3, 0x81, 0x41, 0x81, 0x7A, 0x72, 0xE3, 0xF1, 0x8A, 0xCA, 0x0B, }
    },
    /* by LittleVulpix, FR */
    { "2001:bc8:4400:2100::1c:50f", true, 33445, 3389,
        { 0x2C, 0x28, 0x9F, 0x9F, 0x37, 0xC2, 0x0D, 0x09, 0xDA, 0x83, 0x56, 0x55, 0x88, 0xBF, 0x49, 0x6F,
          0xAB, 0x37, 0x64, 0x85, 0x3F, 0xA3, 0x81, 0x41, 0x81, 0x7A, 0x72, 0xE3, 0xF1, 0x8A, 0xCA, 0x0B, }
    },
    /* by Yani, NL */
    { "37.97.185.116", false, 33445, 33445,
        { 0xE5, 0x9A, 0x0E, 0x71, 0xAD, 0xA2, 0x0D, 0x35, 0xBD, 0x1B, 0x09, 0x57, 0x05, 0x9D, 0x7E, 0xF7,
          0xE7, 0x79, 0x2B, 0x3D, 0x68, 0x0A, 0xE2, 0x5C, 0x6F, 0x4D, 0xBB, 0xA0, 0x91, 0x14, 0xD1, 0x65, }
    },
    /* by linxon, RU */
    { "80.87.193.193", false, 33445, 3389,
        { 0xB3, 0x82, 0x55, 0xEE, 0x4B, 0x05, 0x49, 0x24, 0xF6, 0xD7, 0x9A, 0x5E, 0x6E, 0x58, 0x89, 0xEC,
          0x94, 0xB6, 0xAD, 0xF6, 0xFE, 0x99, 0x06, 0xF9, 0x7A, 0x3D, 0x01, 0xE3, 0xD0, 0x83, 0x22, 0x3A, }
    },
    /* by linxon, RU */
    { "2a01:230:2:6::46a8", true, 33445, 3389,
        { 0xB3, 0x82, 0x55, 0xEE, 0x4B, 0x05, 0x49, 0x24, 0xF6, 0xD7, 0x9A, 0x5E, 0x6E, 0x58, 0x89, 0xEC,
          0x94, 0xB6, 0xAD, 0xF6, 0xFE, 0x99, 0x06, 0xF9, 0x7A, 0x3D, 0x01, 0xE3, 0xD0, 0x83, 0x22, 0x3A, }
    },
    /* by Stranger, UA */
    { "46.229.52.198", false, 33445, 33445,
        { 0x81, 0x3C, 0x8F, 0x41, 0x87, 0x83, 0x3E, 0xF0, 0x65, 0x5B, 0x10, 0xF7, 0x75, 0x21, 0x41, 0xA3,
          0x52, 0x24, 0x84, 0x62, 0xA5, 0x67, 0x52, 0x9A, 0x38, 0xB6, 0xBB, 0xF7, 0x3E, 0x97, 0x93, 0x07, }
    },
    /* by himura, RU */
    { "85.21.144.224", false, 33445, 33445,
        { 0x8F, 0x73, 0x8B, 0xBC, 0x8F, 0xA9, 0x39, 0x46, 0x70, 0xBC, 0xAB, 0x14, 0x6C, 0x67, 0xA5, 0x07,
          0xB9, 0x90, 0x7C, 0x8E, 0x56, 0x4E, 0x28, 0xC2, 0xB5, 0x9B, 0xEB, 0xB2, 0xFF, 0x68, 0x71, 0x1B, }
    },
    /* by dolohow, FR */
    { "37.187.122.30", false, 33445, 3389,
        { 0xBE, 0xB7, 0x1F, 0x97, 0xED, 0x9C, 0x99, 0xC0, 0x4B, 0x84, 0x89, 0xBB, 0x75, 0x57, 0x9E, 0xB4,
          0xDC, 0x6A, 0xB6, 0xF4, 0x41, 0xB6, 0x03, 0xD6, 0x35, 0x33, 0x12, 0x2F, 0x18, 0x58, 0xB5, 0x1D, }
    },
    /* by Busindre, US */
    { "205.185.116.116", false, 33445, 33445,
        { 0xA1, 0x79, 0xB0, 0x97, 0x49, 0xAC, 0x82, 0x6F, 0xF0, 0x1F, 0x37, 0xA9, 0x61, 0x3F, 0x6B, 0x57,
          0x11, 0x8A, 0xE0, 0x14, 0xD4, 0x19, 0x6A, 0x0E, 0x11, 0x05, 0xA9, 0x8F, 0x93, 0xA5, 0x47, 0x02, }
    },
    /* by Busindre, US */
    { "198.98.51.198", false, 33445, 3389,
        { 0x1D, 0x5A, 0x5F, 0x2F, 0x5D, 0x62, 0x33, 0x05, 0x8B, 0xF0, 0x25, 0x9B, 0x09, 0x62, 0x2F, 0xB4,
          0x0B, 0x48, 0x2E, 0x4F, 0xA0, 0x93, 0x1E, 0xB8, 0xFD, 0x3A, 0xB8, 0xE7, 0xBF, 0x7D, 0xAF, 0x6F, }
    },
    /* by Busindre, US */
    { "2605:6400:1:fed5:22:45af:ec10:f329", true, 33445, 3389,
        { 0x1D, 0x5A, 0x5F, 0x2F, 0x5D, 0x62, 0x33, 0x05, 0x8B, 0xF0, 0x25, 0x9B, 0x09, 0x62, 0x2F, 0xB4,
          0x0B, 0x48, 0x2E, 0x4F, 0xA0, 0x93, 0x1E, 0xB8, 0xFD, 0x3A, 0xB8, 0xE7, 0xBF, 0x7D, 0xAF, 0x6F, }
    },
    /* by wildermesser, CA */
    { "104.233.104.126", false, 33445, 33445,
        { 0xED, 0xEE, 0x8F, 0x2E, 0x83, 0x9A, 0x57, 0x82, 0x0D, 0xE3, 0xDA, 0x41, 0x56, 0xD8, 0x83, 0x50,
          0xE5, 0x3D, 0x41, 0x61, 0x44, 0x70, 0x68, 0xA3, 0x45, 0x7E, 0xE8, 0xF5, 0x9F, 0x36, 0x24, 0x14, }
    },

};

#endif

