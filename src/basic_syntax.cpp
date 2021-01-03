#include <iostream>

using namespace std;

int sumDigit(string s) {
    int total = 0;
    for (char c : s) {
        if (isdigit(c)) {
            total += c - '0';
        }
    }
    return total;
}

/**
 * ทายนิสัยจากเบอร์โทรศัพท์มือถือ
 * ref: http://horoscope.sanook.com/34261/
 * @param phoneNumber
 * @return
 */
string habit(string &phoneNumber) {
    string p7 = phoneNumber.substr(3);
    int sum = sumDigit(p7);
    while (sum >= 10) {
        sum = sum / 10 + sum % 10;
    }
    string r[] = {
            "เป็นคนมีอำนาจ ชอบเป็นผู้นำ ใจร้อน ขี้บ่น แต่โกรธง่ายหายเร็ว บางครั้งก็ใจง่าย โลเล เป็นตัวของตัวเอง",
            "เป็นคนอ่อนไหวง่าย มีเสน่ห์ ชอบทำอะไรคนเดียวเงียบ ๆ บุคลิกภายนอกดูเข้มแข็ง แต่ภายในอ่อนไหว",
            "มีลักษณะนิสัยออกไปทางแนวซ่า ๆ พูดเสียงดัง แต่พูดไม่ค่อยเก่ง ทำไรต้องทำให้สำเร็จ",
            "เป็นนักพูดตัวยง พูดเก่ง เป็นคนสนุกสนาน มีเสน่ห์ แต่เจ้าชู้",
            "เป็นคนมีเหตุผลไม่วู่วาม ขี้สงสาร ฉลาด เป็นที่ปรึกษาที่ดี ที่สำคัญไม่ชอบโกหกใคร",
            "เป็นคนที่พร้อมจะให้ความรักกับผู้อื่นทุกเมื่อ สร้างความสุขให้ตนเองโดยการหมดเงินไปกับการแต่งตัว และความบันเทิงทั้งหลาย",
            "ขี้ตกใจขี้กังวลเวลาโกรธมาก ๆ มักจะขาดสติ คำพูดมักจะก่อให้เกิดศัตรูได้ ดังนั้นควรระวังคำพูด",
            "นิสัยออกก๋ากั่นนักเลงนิด ๆ แต่ข้อเสียคือเป็นคนเชื่อคนง่าย หากถูกใจใครแล้วก็จะหลงคนนั้นได้ง่ายดาย",
            "ประพฤติตนแตกต่างจากพวกเดียวกัน ชอบทำตัวเหมือนคนโบราณ หรือ เป็นผู้ใหญ่เกินอายุ เลยทำให้เป็นคนช่างคิด"};
    return r[sum - 1];
}

//int main() { string phoneNumber; cout << "enter your phone number: "; cin >> phoneNumber; cout << habit(phoneNumber) << endl; return 0; }

int main() {
    string phoneNumber;
    cout << "enter your phone number: ";
    cin >> phoneNumber;
    cout << habit(phoneNumber) << endl;
    return 0;
}