/*
 * ARRAY LAB (C99) - เติมโค้ดเฉพาะส่วน STUDENT IMPLEMENTATION
 * Compile: gcc -std=c99 -Wall -Wextra -pedantic array_lab.c -o array_lab
 * Run all: ./array_lab
 * Run one: ./array_lab maxmin   (average / sort / reverse / rows)
 *
 * ฟังก์ชันและ main เตรียมไว้แล้ว ไม่ต้องเขียน scanf หรือ printf ในคำตอบ
 * ใช้ array[index], if, for และตัวแปรพื้นฐานได้เลย
 * ห้ามเปลี่ยนชื่อฟังก์ชัน พารามิเตอร์ หรือส่วน TEST RUNNER
 * เทสใช้ข้อมูลที่เป็นไปตามเงื่อนไขของแต่ละโจทย์เสมอ
 * คะแนน: 5 ข้อ ข้อละ 10 เทส เทสละ 2 คะแนน = ข้อละ 20 / รวม 100
 * [EDGE] คือกรณีขอบเขตเพิ่มเติม ทุกเทสมีน้ำหนักเท่ากัน
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* ==================== STUDENT IMPLEMENTATION ==================== */

/* 1. MAX / MIN
 * a มี n สมาชิก โดย n >= 1
 * เขียนค่าสูงสุดลง result[0] และค่าต่ำสุดลง result[1]
 * ห้ามเปลี่ยนค่าใน a
 * Input {12, 7, 25, 3, 18} -> Expected result {25, 3}
 * Input {-8, -2, -10, -4} -> Expected result {-2, -10}
 * Input {-7} -> Expected result {-7, -7}
 */
void find_max_min(const int a[], int n, int result[2])
{
    /* TODO: เขียนโค้ดตรงนี้ */
    result[0] = a[0];
    result[1] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > result[0]) result[0] = a[i];
        if (a[i] < result[1]) result[1] = a[i];
    }
    /* บรรทัด (void) ป้องกัน warning ตอนยังไม่ได้ทำ ลบออกได้ */
    (void)a;
    (void)n;
    (void)result;
}

/* 2. AVERAGE
 * a มี n สมาชิก โดย n >= 1; ห้ามเปลี่ยนค่าใน a
 * return ค่าเฉลี่ยเป็น double (ต้องเก็บทศนิยมได้)
 * Input {1, 2} -> Expected return 1.5
 * Input {-2, -3, -5} -> Expected return -3.333333333...
 * Input {INT_MAX, INT_MAX} -> Expected return (double)INT_MAX
 * ผลรวมอาจเกิน int; เลือกชนิดตัวแปรสะสมให้เหมาะสม
 */
double find_average(const int a[], int n)
{
    /* TODO: เขียนโค้ด และเปลี่ยน return ด้านล่าง */
    (void)a;
    (void)n;
    return 0.0;
}

/* 3. BUBBLE SORT: มากไปน้อย
 * a มี n สมาชิก โดย n >= 1
 * เรียงและแก้ไขค่าใน a โดยใช้ Bubble Sort
 * Input {3, 1, 4, 2} -> Expected a {4, 3, 2, 1}
 * Input {3, 1, 3, 2, 1} -> Expected a {3, 3, 2, 1, 1}
 * Input {-2, 0, -7, 4} -> Expected a {4, 0, -2, -7}
 * เทสตรวจผลลัพธ์; ผู้สอนตรวจวิธีใช้ Bubble Sort เพิ่มเติม
 */
void sort_descending(int a[], int n)
{
    /* TODO: เขียนโค้ดตรงนี้ */
    (void)a;
    (void)n;
}

/* 4. REVERSE WORD
 * word เป็น String แบบ ASCII ที่มี '\0' ปิดท้ายเสมอ
 * กลับลำดับตัวอักษรในอาเรย์เดิม และรักษา '\0' ปิดท้าย
 * รองรับข้อความว่าง ""; ใช้ strlen ได้; ห้ามใช้ strrev
 * Input "HELLO" -> Expected word "OLLEH"
 * Input "" -> Expected word ""
 * Input " ab " -> Expected word " ba " (รักษาช่องว่าง)
 * เทสมีความยาวข้อความ 0 ถึง 63 ตัวอักษร ไม่รวมตัวปิดท้าย
 */
void reverse_word(char word[])
{
    /* TODO: เขียนโค้ดตรงนี้ */
    (void)word;
}

/* 5. ROW SUMS: อาเรย์ 2 มิติ
 * matrix มี rows แถว และ 3 คอลัมน์เสมอ โดย rows >= 1
 * sums มีพื้นที่ rows ช่อง ให้เขียนผลรวมของแถว r ลง sums[r]
 * ห้ามแก้ไข matrix; ข้อมูลเทสมีผลรวมอยู่ในช่วงของ int
 * Input {{1,2,3}, {4,5,6}} -> Expected sums {6,15}
 * Input {{-1,-2,-3}, {-4,-5,-6}} -> Expected sums {-6,-15}
 * Input {{0,0,9}, {0,-5,0}, {7,0,0}} -> Expected sums {9,-5,7}
 * ใช้ matrix[r][c] ตามปกติ ไม่ต้องแก้ไขพารามิเตอร์ที่เตรียมไว้
 */
void row_sums(int rows, int matrix[rows][3], int sums[])
{
    /* TODO: เขียนโค้ดตรงนี้ */
    (void)rows;
    (void)matrix;
    (void)sums;
}

/* ================== END STUDENT IMPLEMENTATION ================== */

/* ================= TEST RUNNER: DO NOT EDIT =====================
 * ส่วนนี้สำหรับตรวจคำตอบ ไม่ใช่เนื้อหาที่ต้อง implement
 * การ return 0 ของ main หมายถึงผ่านทั้งหมด; 1 = มีเทสไม่ผ่าน
 */
static int passed = 0;
static int total = 0;
static int active_group = 0;
static int group_passed[5] = {0};
static int group_total[5] = {0};
static const int points_per_test = 2;
static const char *group_names[5] = {
    "MAX / MIN", "AVERAGE", "SORT DESCENDING", "REVERSE WORD", "ROW SUMS"
};

static void print_array(const int a[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%s%d", i ? ", " : "", a[i]);
    }
    printf("}");
}

static int arrays_equal(const int a[], const int b[], int n)
{
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

static void report(const char label[], int ok)
{
    total++;
    group_total[active_group]++;
    if (ok) {
        passed++;
        group_passed[active_group]++;
    }
    printf("  [%s +%d/%d] %s\n", ok ? "PASS" : "FAIL",
           ok ? points_per_test : 0, points_per_test, label);
}

static void maxmin_case(const char label[], const int input[], int n,
                        int expected_max, int expected_min)
{
    int work[n];
    int result[2] = {123456, -123456};
    int expected[2] = {expected_max, expected_min};
    for (int i = 0; i < n; i++) work[i] = input[i];
    find_max_min(work, n, result);
    int unchanged = arrays_equal(work, input, n);
    int ok = arrays_equal(result, expected, 2) && unchanged;
    report(label, ok);
    if (!ok) {
        printf("    input: "); print_array(input, n);
        printf("\n    expected [max,min]: "); print_array(expected, 2);
        printf("\n    actual: "); print_array(result, 2);
        printf("\n    input unchanged: %s\n", unchanged ? "yes" : "NO");
    }
}

static void test_maxmin(void)
{
    active_group = 0;
    puts("\n1. MAX / MIN");
    maxmin_case("mixed values", (int[]){12,7,25,3,18}, 5, 25, 3);
    maxmin_case("all negative", (int[]){-8,-2,-10,-4}, 4, -2, -10);
    maxmin_case("single item", (int[]){42}, 1, 42, 42);
    maxmin_case("all equal", (int[]){7,7,7,7}, 4, 7, 7);
    maxmin_case("zero and signs", (int[]){0,-9,6,0}, 4, 6, -9);
    maxmin_case("extremes at endpoints", (int[]){-20,3,7,8,50}, 5, 50, -20);
    maxmin_case("[EDGE] all zero", (int[]){0,0,0}, 3, 0, 0);
    maxmin_case("[EDGE] single negative", (int[]){-7}, 1, -7, -7);
    maxmin_case("[EDGE] descending endpoints", (int[]){50,8,7,3,-20}, 5, 50, -20);
    maxmin_case("[EDGE] int limits", (int[]){INT_MIN,0,INT_MAX}, 3, INT_MAX, INT_MIN);
}

static void average_case(const char label[], const int input[], int n,
                         double expected)
{
    int work[n];
    for (int i = 0; i < n; i++) work[i] = input[i];
    double actual = find_average(work, n);
    double diff = actual - expected;
    if (diff < 0) diff = -diff;
    int unchanged = arrays_equal(work, input, n);
    /* NaN และ infinity จะไม่ผ่านเงื่อนไขนี้ */
    int ok = diff <= 0.000001 && unchanged;
    report(label, ok);
    if (!ok) {
        printf("    input: "); print_array(input, n);
        printf("\n    expected: %.9f; actual: %.9f\n", expected, actual);
        printf("    input unchanged: %s\n", unchanged ? "yes" : "NO");
    }
}

static void test_average(void)
{
    active_group = 1;
    puts("\n2. AVERAGE (tolerance = 0.000001)");
    average_case("scores", (int[]){70,80,65,90,85}, 5, 78.0);
    average_case("fractional result", (int[]){1,2}, 2, 1.5);
    average_case("all negative", (int[]){-2,-3,-5}, 3, -10.0/3.0);
    average_case("single item", (int[]){9}, 1, 9.0);
    average_case("balanced signs", (int[]){-5,0,5}, 3, 0.0);
    average_case("repeated values", (int[]){4,4,4,4}, 4, 4.0);
    average_case("[EDGE] all zero", (int[]){0,0,0}, 3, 0.0);
    average_case("[EDGE] negative fractional", (int[]){-1,-2}, 2, -1.5);
    average_case("[EDGE] sum exceeds int", (int[]){INT_MAX,INT_MAX}, 2, (double)INT_MAX);
    average_case("[EDGE] int limits cancel", (int[]){INT_MIN,INT_MAX}, 2,
                 ((double)INT_MIN + (double)INT_MAX) / 2.0);
}

static void sort_case(const char label[], const int input[],
                      const int expected[], int n)
{
    int work[n];
    for (int i = 0; i < n; i++) work[i] = input[i];
    sort_descending(work, n);
    int ok = arrays_equal(work, expected, n);
    report(label, ok);
    if (!ok) {
        printf("    input: "); print_array(input, n);
        printf("\n    expected: "); print_array(expected, n);
        printf("\n    actual: "); print_array(work, n); printf("\n");
    }
}

static void test_sort(void)
{
    active_group = 2;
    puts("\n3. SORT DESCENDING");
    sort_case("mixed", (int[]){12,7,25,3,18}, (int[]){25,18,12,7,3}, 5);
    sort_case("ascending input", (int[]){1,2,3,4,5}, (int[]){5,4,3,2,1}, 5);
    sort_case("already descending", (int[]){5,4,3,2}, (int[]){5,4,3,2}, 4);
    sort_case("duplicates", (int[]){3,1,3,2,1}, (int[]){3,3,2,1,1}, 5);
    sort_case("negative and zero", (int[]){-2,0,-7,4}, (int[]){4,0,-2,-7}, 4);
    sort_case("single item", (int[]){8}, (int[]){8}, 1);
    sort_case("[EDGE] all equal", (int[]){5,5,5,5}, (int[]){5,5,5,5}, 4);
    sort_case("[EDGE] two items", (int[]){-1,2}, (int[]){2,-1}, 2);
    sort_case("[EDGE] int limits", (int[]){0,INT_MIN,INT_MAX,-1},
              (int[]){INT_MAX,0,-1,INT_MIN}, 4);
    int large[64], expected[64];
    for (int i = 0; i < 64; i++) {
        large[i] = i - 32;
        expected[i] = 31 - i;
    }
    sort_case("[EDGE] 64 ascending items", large, expected, 64);
}

static void reverse_case(const char label[], const char input[],
                         const char expected[])
{
    char work[64] = {0};
    size_t length = strlen(input);
    memcpy(work, input, length + 1);
    reverse_word(work);
    /* ตรวจแบบจำกัดความยาว จึงไม่อ่านเลย buffer หากคำตอบลืม '\0' */
    int ok = memcmp(work, expected, length + 1) == 0;
    report(label, ok);
    if (!ok) {
        printf("    input: \"%s\"; expected: \"%s\"\n", input, expected);
        printf("    actual (up to 63 bytes): \"%.63s\"\n", work);
        printf("    terminator at index %zu: %s\n", length,
               work[length] == '\0' ? "yes" : "NO");
    }
}

static void test_reverse(void)
{
    active_group = 3;
    puts("\n4. REVERSE ASCII STRING");
    reverse_case("odd length", "HELLO", "OLLEH");
    reverse_case("even length", "ABCD", "DCBA");
    reverse_case("empty string", "", "");
    reverse_case("single character", "A", "A");
    reverse_case("palindrome", "LEVEL", "LEVEL");
    reverse_case("spaces and digits", "C 123!", "!321 C");
    reverse_case("[EDGE] two characters", "AB", "BA");
    reverse_case("[EDGE] repeated character", "AAAA", "AAAA");
    reverse_case("[EDGE] outer spaces", " ab ", " ba ");
    reverse_case("[EDGE] 63 characters",
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!",
        "!9876543210zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA");
}

static void rows_case(const char label[], int rows,
                      int input[rows][3], const int expected[])
{
    int work[rows][3];
    int sums[rows];
    for (int r = 0; r < rows; r++) {
        sums[r] = 123456;
        for (int c = 0; c < 3; c++) work[r][c] = input[r][c];
    }
    row_sums(rows, work, sums);
    int unchanged = 1;
    for (int r = 0; r < rows; r++) {
        if (!arrays_equal(work[r], input[r], 3)) unchanged = 0;
    }
    int ok = arrays_equal(sums, expected, rows) && unchanged;
    report(label, ok);
    if (!ok) {
        for (int r = 0; r < rows; r++) {
            printf("    input row %d: ", r); print_array(input[r], 3); puts("");
        }
        printf("    expected: "); print_array(expected, rows);
        printf("\n    actual: "); print_array(sums, rows);
        printf("\n    matrix unchanged: %s\n", unchanged ? "yes" : "NO");
    }
}

static void test_rows(void)
{
    active_group = 4;
    puts("\n5. ROW SUMS (3 columns)");
    rows_case("two rows", 2, (int[][3]){{1,2,3},{4,5,6}}, (int[]){6,15});
    rows_case("one row", 1, (int[][3]){{10,20,30}}, (int[]){60});
    rows_case("all negative", 2, (int[][3]){{-1,-2,-3},{-4,-5,-6}}, (int[]){-6,-15});
    rows_case("zero matrix", 2, (int[][3]){{0,0,0},{0,0,0}}, (int[]){0,0});
    rows_case("reset sum each row", 3, (int[][3]){{1,1,1},{2,2,2},{3,3,3}}, (int[]){3,6,9});
    rows_case("mixed signs", 2, (int[][3]){{-5,2,8},{9,-9,1}}, (int[]){5,1});
    rows_case("[EDGE] nonzero in different columns", 3,
              (int[][3]){{0,0,9},{0,-5,0},{7,0,0}}, (int[]){9,-5,7});
    rows_case("[EDGE] int limit sums", 2,
              (int[][3]){{INT_MAX,0,0},{INT_MIN,0,0}}, (int[]){INT_MAX,INT_MIN});
    rows_case("[EDGE] large cancellation", 2,
              (int[][3]){{INT_MAX,-INT_MAX,7},{INT_MIN,INT_MAX,0}},
              (int[]){7,INT_MIN + INT_MAX});
    int large[8][3], expected[8];
    for (int r = 0; r < 8; r++) {
        large[r][0] = r;
        large[r][1] = -2 * r;
        large[r][2] = 5 * r + 3;
        expected[r] = 4 * r + 3;
    }
    rows_case("[EDGE] eight independent rows", 8, large, expected);
}

int main(int argc, char *argv[])
{
    const char *choice = argc == 1 ? "all" : argv[1];
    if (argc > 2 || (strcmp(choice, "all") != 0 &&
                    strcmp(choice, "maxmin") != 0 &&
                    strcmp(choice, "average") != 0 &&
                    strcmp(choice, "sort") != 0 &&
                    strcmp(choice, "reverse") != 0 &&
                    strcmp(choice, "rows") != 0)) {
        fprintf(stderr, "Usage: %s [all|maxmin|average|sort|reverse|rows]\n", argv[0]);
        return 2;
    }
    puts("ARRAY LAB / C99 - Local practice tests");
    if (!strcmp(choice, "all") || !strcmp(choice, "maxmin")) test_maxmin();
    if (!strcmp(choice, "all") || !strcmp(choice, "average")) test_average();
    if (!strcmp(choice, "all") || !strcmp(choice, "sort")) test_sort();
    if (!strcmp(choice, "all") || !strcmp(choice, "reverse")) test_reverse();
    if (!strcmp(choice, "all") || !strcmp(choice, "rows")) test_rows();
    puts("\n========== SCORE SUMMARY ==========");
    for (int i = 0; i < 5; i++) {
        if (group_total[i] > 0) {
            printf("%d. %-16s : %2d/%2d points (%d/%d tests)\n",
                   i + 1, group_names[i], group_passed[i] * points_per_test,
                   group_total[i] * points_per_test, group_passed[i], group_total[i]);
        }
    }
    printf("TOTAL SCORE: %d/%d points\n", passed * points_per_test,
           total * points_per_test);
    printf("RESULT: %d/%d passed\n", passed, total);
    puts(passed == total ? "All selected tests passed!" : "Read FAIL details, edit TODO sections, then compile and run again.");
    return passed == total ? 0 : 1;
}
