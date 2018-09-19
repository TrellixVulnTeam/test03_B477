/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

namespace js {
namespace moduleloader {
    static const unsigned char data[] = { 120, 156, 165, 87, 201, 110, 219, 48, 16, 189, 251, 43, 88, 31, 10, 25, 81, 212, 244, 90, 215, 1, 2, 116, 71, 186, 32, 62, 244, 16, 24, 129, 98, 143, 109, 182, 50, 169, 146, 84, 210, 180, 245, 191, 119, 40, 138, 18, 41, 82, 142, 139, 234, 96, 88, 195, 89, 222, 172, 28, 253, 30, 45, 57, 147, 138, 92, 8, 145, 63, 124, 17, 92, 113, 245, 80, 194, 7, 78, 25, 153, 25, 98, 86, 90, 106, 246, 13, 201, 211, 70, 224, 99, 94, 182, 236, 111, 65, 33, 55, 82, 28, 222, 13, 168, 24, 235, 187, 92, 6, 172, 219, 92, 198, 88, 231, 17, 173, 178, 211, 250, 249, 246, 27, 44, 213, 43, 88, 83, 6, 40, 83, 130, 80, 15, 200, 111, 200, 217, 202, 163, 91, 153, 43, 88, 23, 120, 122, 81, 150, 133, 230, 109, 94, 179, 92, 191, 91, 158, 185, 18, 148, 109, 90, 20, 239, 217, 10, 126, 126, 94, 35, 183, 57, 112, 192, 80, 115, 52, 32, 120, 153, 75, 117, 64, 184, 232, 142, 7, 20, 204, 85, 46, 148, 252, 74, 213, 54, 38, 47, 219, 211, 33, 241, 234, 86, 214, 148, 168, 180, 61, 236, 69, 230, 146, 231, 43, 16, 40, 193, 224, 158, 44, 17, 163, 36, 191, 71, 4, 159, 154, 75, 84, 75, 197, 69, 50, 105, 104, 250, 81, 91, 42, 51, 1, 27, 138, 167, 15, 141, 28, 166, 44, 153, 76, 125, 150, 29, 95, 85, 5, 124, 201, 213, 86, 30, 224, 42, 208, 188, 230, 65, 22, 172, 159, 143, 181, 204, 101, 67, 179, 204, 251, 250, 87, 128, 228, 197, 29, 36, 44, 223, 65, 74, 140, 118, 23, 23, 93, 147, 132, 203, 172, 68, 193, 140, 202, 139, 91, 228, 174, 148, 97, 159, 76, 90, 46, 163, 73, 85, 130, 17, 125, 210, 161, 41, 176, 246, 28, 48, 30, 184, 169, 103, 36, 52, 109, 229, 169, 188, 130, 34, 87, 244, 14, 186, 82, 171, 43, 47, 25, 76, 116, 74, 140, 63, 215, 227, 236, 217, 120, 225, 227, 244, 159, 63, 127, 254, 93, 229, 99, 58, 241, 153, 122, 199, 218, 63, 199, 139, 167, 79, 125, 155, 189, 190, 78, 131, 76, 163, 85, 243, 182, 152, 244, 3, 100, 131, 212, 113, 247, 131, 212, 27, 48, 7, 181, 79, 163, 186, 37, 148, 117, 135, 61, 18, 126, 167, 81, 83, 7, 143, 14, 153, 14, 88, 168, 91, 135, 165, 213, 125, 62, 35, 103, 241, 160, 58, 245, 115, 48, 85, 182, 21, 123, 198, 207, 210, 214, 129, 62, 136, 253, 40, 252, 215, 148, 177, 173, 121, 61, 170, 19, 139, 192, 212, 128, 215, 63, 140, 139, 93, 94, 208, 95, 144, 104, 118, 55, 59, 102, 30, 104, 42, 154, 39, 179, 150, 142, 193, 240, 251, 67, 223, 16, 103, 62, 105, 201, 119, 37, 103, 192, 148, 110, 242, 235, 69, 175, 159, 48, 206, 115, 173, 210, 149, 186, 223, 210, 2, 72, 98, 207, 94, 214, 134, 179, 2, 216, 198, 71, 101, 149, 208, 71, 162, 217, 38, 178, 52, 81, 108, 252, 72, 173, 245, 126, 40, 235, 18, 71, 179, 145, 28, 106, 83, 14, 154, 105, 128, 165, 196, 30, 59, 62, 185, 13, 160, 6, 71, 74, 104, 31, 74, 23, 31, 74, 78, 200, 243, 16, 167, 177, 55, 155, 145, 113, 54, 214, 205, 200, 200, 121, 12, 55, 38, 80, 81, 86, 193, 65, 5, 174, 134, 72, 107, 106, 238, 46, 153, 215, 140, 156, 146, 231, 11, 107, 59, 38, 96, 12, 7, 2, 181, 165, 176, 131, 134, 97, 234, 103, 127, 36, 156, 39, 26, 78, 237, 199, 192, 89, 118, 12, 214, 38, 189, 136, 245, 244, 148, 253, 31, 84, 255, 45, 182, 160, 56, 94, 96, 83, 158, 156, 164, 17, 120, 55, 55, 245, 61, 125, 115, 243, 130, 176, 170, 40, 210, 128, 225, 46, 47, 42, 120, 81, 151, 95, 120, 120, 47, 168, 202, 111, 11, 60, 199, 235, 26, 231, 62, 176, 106, 7, 194, 165, 160, 55, 107, 186, 169, 28, 154, 239, 132, 83, 150, 123, 191, 225, 237, 204, 88, 245, 171, 62, 220, 30, 83, 226, 122, 106, 219, 208, 45, 121, 123, 239, 182, 74, 221, 241, 180, 6, 181, 220, 6, 163, 169, 155, 113, 107, 156, 26, 184, 118, 228, 171, 55, 248, 199, 240, 185, 226, 122, 240, 93, 48, 156, 125, 66, 134, 3, 46, 112, 165, 190, 88, 122, 3, 209, 191, 228, 143, 184, 246, 236, 14, 132, 206, 118, 202, 23, 241, 93, 227, 136, 123, 110, 64, 157, 63, 81, 37, 175, 196, 18, 172, 7, 78, 204, 124, 54, 115, 173, 212, 211, 12, 227, 97, 182, 170, 196, 200, 154, 177, 228, 240, 15, 66, 155, 31, 134, 102, 47, 175, 197, 191, 233, 138, 93, 231, 6, 83, 164, 84, 204, 113, 36, 207, 175, 127, 194, 82, 111, 119, 177, 76, 183, 206, 183, 59, 156, 95, 24, 157, 21, 195, 137, 95, 14, 184, 247, 10, 220, 120, 56, 123, 143, 55, 97, 142, 173, 95, 191, 36, 67, 128, 50, 208, 13, 233, 241, 24, 116, 20, 27, 64, 168, 43, 206, 213, 80, 37, 187, 152, 60, 39, 92, 53, 215, 99, 163, 104, 188, 104, 182, 93, 1, 107, 16, 2, 68, 223, 213, 210, 89, 86, 253, 253, 88, 207, 145, 16, 254, 163, 214, 247, 211, 145, 180, 107, 248, 149, 81, 248, 142, 243, 239, 73, 98, 19, 37, 224, 71, 5, 82, 125, 210, 219, 5, 153, 157, 55, 120, 28, 44, 222, 103, 69, 11, 202, 17, 107, 119, 247, 233, 40, 108, 144, 70, 44, 150, 52, 61, 165, 236, 231, 91, 251, 209, 226, 137, 33, 207, 95, 87, 250, 121, 217 };

    static const unsigned char * const compressedSources = reinterpret_cast<const unsigned char *>(data);

    uint32_t GetCompressedSize() {
        return 999;
    }

    uint32_t GetRawScriptsSize() {
        return 3805;
    }
} // selfhosted
} // js