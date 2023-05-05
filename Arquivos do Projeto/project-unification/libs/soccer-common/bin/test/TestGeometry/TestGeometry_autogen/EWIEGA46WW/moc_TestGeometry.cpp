/****************************************************************************
** Meta object code from reading C++ file 'TestGeometry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../test/TestGeometry/TestGeometry.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestGeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTestGeometryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestGeometryENDCLASS = QtMocHelpers::stringData(
    "TestGeometry",
    "initTestCase",
    "",
    "init",
    "cleanup",
    "cleanupTestCase",
    "test_radiansToDegrees_whenGivenAFloatingPoint_shouldWork",
    "test_degreesToRadians_whenGivenAFloatingPoint_shouldWork",
    "test_operator_degrees_whenGivenAFloatingPoint_shouldWork",
    "test_smallestAngleDiff_whenGivenTwoFloatingPointNumbers_shouldWork",
    "test_normalizeAngle_whenGivenThreeFloatingPointNumbers_shouldWork",
    "test_normalizeInPI_whenGivenAFloatingPoint_shouldWork",
    "test_normalizeIn180_whenGivenAFloatingPoint_shouldWork",
    "test_2D_operatorLess_whenGivenTwoPoints_shouldWork",
    "test2D_fromPolar_whenGivenAFloatingPoint_shouldWork",
    "test2D_fromPolar_whenGivenTwoFloatingPointNumbers_shouldWork",
    "test_2D_dot_whenGivenTwoPoints_shouldWork",
    "test_2D_cross_whenGivenTwoPoints_shouldWork",
    "test_2D_distanceSquared_whenGivenFourNumbers_shouldWork",
    "test_2D_distanceSquared_whenGivenTwoPoints_shouldWork",
    "test_2D_distance_whenGivenFourNumbers_shouldWork",
    "test_2D_distance_whenGivenTwoPoints_shouldWork",
    "test_2D_rotateCW90_whenGivenAPoint_shouldWork",
    "test_2D_rotateCCW90_whenGivenAPoint_shouldWork",
    "test_2D_rotateCW_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_rotateCCW_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_angle_whenGivenAPoint_shouldWork",
    "test_2D_angleBetween_whenGivenTwoPoints_shouldWork",
    "test_2D_lengthSquared_whenGivenAPoint_shouldWork",
    "test_2D_length_whenGivenAPoint_shouldWork",
    "test_2D_norm_whenGivenAPoint_shouldWork",
    "test_2D_manhattanLength_whenGivenAPoint_shouldWork",
    "test_2D_resize_whenGivenAFloatingPointPointAndAFloatingPoint_shouldWor"
    "k",
    "test_2D_normalize_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_normalize_whenGivenAnIntegerPoint_shouldWork",
    "test_2D_isTriangle_whenGivenThreeNumbers_shouldWork",
    "test_2D_signedArea2_whenGivenAPolygon_shouldWork",
    "test_2D_signedArea_whenGivenAPolygon_shouldWork",
    "test_2D_area2_whenGivenAPolygon_shouldWork",
    "test_2D_area_whenGivenAPolygon_shouldWork",
    "test_2D_centroid_whenGivenAPolygonOfFloatingPointPoints_shouldWork",
    "test_2D_projectPointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_projectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWo"
    "rk",
    "test_2D_distancePointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_distancePointLine_whenGivenALineAndAFloatingPointPoint_shouldW"
    "ork",
    "test_2D_reflectPointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_reflectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWo"
    "rk",
    "test_2D_isOnTheLeft_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_isOnTheLeft_whenGivenALineAndAFloatingPointPoint_shouldWork",
    "test_2D_isOnTheRight_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_isOnTheRight_whenGivenALineAndAFloatingPointPoint_shouldWork",
    "test_2D_projectPointSegment_whenGivenThreeFloatingPointPoints_shouldWo"
    "rk",
    "test_2D_projectPointSegment_whenGivenALineAndAFloatingPointPoint_shoul"
    "dWork",
    "test_2D_distancePointSegment_whenGivenThreeFloatingPointPoints_shouldW"
    "ork",
    "test_2D_distancePointSegment_whenGivenALineAndAFloatingPointPoint_shou"
    "ldWork",
    "test_2D_linesParallel_whenGivenFourPoints_shouldWork",
    "test_2D_linesParallel_whenGivenTwoLines_shouldWork",
    "test_2D_linesCollinear_whenGivenFourPoints_shouldWork",
    "test_2D_linesCollinear_whenGivenTwoLines_shouldWork",
    "test_2D_segmentsIntersect_whenGivenFourFloatingPointPoints_shouldWork",
    "test_2D_segmentsIntersect_whenGivenTwoLines_shouldWork",
    "test_2D_linesIntersection_whenGivenFourFloatingPointPoints_shouldWork",
    "test_2D_linesIntersection_whenGivenTwoLines_shouldWork",
    "test_2D_segmentsIntersection_whenGivenFourFloatingPointPoints_shouldWo"
    "rk",
    "test_2D_segmentsIntersection_whenGivenTwoLines_shouldWork",
    "test_2D_convexHull_whenGivenAPolygon_shouldWork",
    "test_2D_pointInPolygon_whenGivenAPolygonAndAPoint_shouldWork",
    "test_2D_pointOnPolygon_whenGivenAPolygonAndAPoint_shouldWork"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestGeometryENDCLASS_t {
    uint offsetsAndSizes[136];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[57];
    char stringdata7[57];
    char stringdata8[57];
    char stringdata9[67];
    char stringdata10[66];
    char stringdata11[54];
    char stringdata12[55];
    char stringdata13[51];
    char stringdata14[52];
    char stringdata15[61];
    char stringdata16[42];
    char stringdata17[44];
    char stringdata18[56];
    char stringdata19[54];
    char stringdata20[49];
    char stringdata21[47];
    char stringdata22[46];
    char stringdata23[47];
    char stringdata24[57];
    char stringdata25[58];
    char stringdata26[41];
    char stringdata27[51];
    char stringdata28[49];
    char stringdata29[42];
    char stringdata30[40];
    char stringdata31[51];
    char stringdata32[72];
    char stringdata33[58];
    char stringdata34[53];
    char stringdata35[52];
    char stringdata36[49];
    char stringdata37[48];
    char stringdata38[43];
    char stringdata39[42];
    char stringdata40[67];
    char stringdata41[70];
    char stringdata42[73];
    char stringdata43[71];
    char stringdata44[74];
    char stringdata45[70];
    char stringdata46[73];
    char stringdata47[65];
    char stringdata48[68];
    char stringdata49[66];
    char stringdata50[69];
    char stringdata51[73];
    char stringdata52[76];
    char stringdata53[74];
    char stringdata54[77];
    char stringdata55[53];
    char stringdata56[51];
    char stringdata57[54];
    char stringdata58[52];
    char stringdata59[70];
    char stringdata60[55];
    char stringdata61[70];
    char stringdata62[55];
    char stringdata63[73];
    char stringdata64[58];
    char stringdata65[48];
    char stringdata66[61];
    char stringdata67[61];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestGeometryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestGeometryENDCLASS_t qt_meta_stringdata_CLASSTestGeometryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "TestGeometry"
        QT_MOC_LITERAL(13, 12),  // "initTestCase"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 4),  // "init"
        QT_MOC_LITERAL(32, 7),  // "cleanup"
        QT_MOC_LITERAL(40, 15),  // "cleanupTestCase"
        QT_MOC_LITERAL(56, 56),  // "test_radiansToDegrees_whenGiv..."
        QT_MOC_LITERAL(113, 56),  // "test_degreesToRadians_whenGiv..."
        QT_MOC_LITERAL(170, 56),  // "test_operator_degrees_whenGiv..."
        QT_MOC_LITERAL(227, 66),  // "test_smallestAngleDiff_whenGi..."
        QT_MOC_LITERAL(294, 65),  // "test_normalizeAngle_whenGiven..."
        QT_MOC_LITERAL(360, 53),  // "test_normalizeInPI_whenGivenA..."
        QT_MOC_LITERAL(414, 54),  // "test_normalizeIn180_whenGiven..."
        QT_MOC_LITERAL(469, 50),  // "test_2D_operatorLess_whenGive..."
        QT_MOC_LITERAL(520, 51),  // "test2D_fromPolar_whenGivenAFl..."
        QT_MOC_LITERAL(572, 60),  // "test2D_fromPolar_whenGivenTwo..."
        QT_MOC_LITERAL(633, 41),  // "test_2D_dot_whenGivenTwoPoint..."
        QT_MOC_LITERAL(675, 43),  // "test_2D_cross_whenGivenTwoPoi..."
        QT_MOC_LITERAL(719, 55),  // "test_2D_distanceSquared_whenG..."
        QT_MOC_LITERAL(775, 53),  // "test_2D_distanceSquared_whenG..."
        QT_MOC_LITERAL(829, 48),  // "test_2D_distance_whenGivenFou..."
        QT_MOC_LITERAL(878, 46),  // "test_2D_distance_whenGivenTwo..."
        QT_MOC_LITERAL(925, 45),  // "test_2D_rotateCW90_whenGivenA..."
        QT_MOC_LITERAL(971, 46),  // "test_2D_rotateCCW90_whenGiven..."
        QT_MOC_LITERAL(1018, 56),  // "test_2D_rotateCW_whenGivenAFl..."
        QT_MOC_LITERAL(1075, 57),  // "test_2D_rotateCCW_whenGivenAF..."
        QT_MOC_LITERAL(1133, 40),  // "test_2D_angle_whenGivenAPoint..."
        QT_MOC_LITERAL(1174, 50),  // "test_2D_angleBetween_whenGive..."
        QT_MOC_LITERAL(1225, 48),  // "test_2D_lengthSquared_whenGiv..."
        QT_MOC_LITERAL(1274, 41),  // "test_2D_length_whenGivenAPoin..."
        QT_MOC_LITERAL(1316, 39),  // "test_2D_norm_whenGivenAPoint_..."
        QT_MOC_LITERAL(1356, 50),  // "test_2D_manhattanLength_whenG..."
        QT_MOC_LITERAL(1407, 71),  // "test_2D_resize_whenGivenAFloa..."
        QT_MOC_LITERAL(1479, 57),  // "test_2D_normalize_whenGivenAF..."
        QT_MOC_LITERAL(1537, 52),  // "test_2D_normalize_whenGivenAn..."
        QT_MOC_LITERAL(1590, 51),  // "test_2D_isTriangle_whenGivenT..."
        QT_MOC_LITERAL(1642, 48),  // "test_2D_signedArea2_whenGiven..."
        QT_MOC_LITERAL(1691, 47),  // "test_2D_signedArea_whenGivenA..."
        QT_MOC_LITERAL(1739, 42),  // "test_2D_area2_whenGivenAPolyg..."
        QT_MOC_LITERAL(1782, 41),  // "test_2D_area_whenGivenAPolygo..."
        QT_MOC_LITERAL(1824, 66),  // "test_2D_centroid_whenGivenAPo..."
        QT_MOC_LITERAL(1891, 69),  // "test_2D_projectPointLine_when..."
        QT_MOC_LITERAL(1961, 72),  // "test_2D_projectPointLine_when..."
        QT_MOC_LITERAL(2034, 70),  // "test_2D_distancePointLine_whe..."
        QT_MOC_LITERAL(2105, 73),  // "test_2D_distancePointLine_whe..."
        QT_MOC_LITERAL(2179, 69),  // "test_2D_reflectPointLine_when..."
        QT_MOC_LITERAL(2249, 72),  // "test_2D_reflectPointLine_when..."
        QT_MOC_LITERAL(2322, 64),  // "test_2D_isOnTheLeft_whenGiven..."
        QT_MOC_LITERAL(2387, 67),  // "test_2D_isOnTheLeft_whenGiven..."
        QT_MOC_LITERAL(2455, 65),  // "test_2D_isOnTheRight_whenGive..."
        QT_MOC_LITERAL(2521, 68),  // "test_2D_isOnTheRight_whenGive..."
        QT_MOC_LITERAL(2590, 72),  // "test_2D_projectPointSegment_w..."
        QT_MOC_LITERAL(2663, 75),  // "test_2D_projectPointSegment_w..."
        QT_MOC_LITERAL(2739, 73),  // "test_2D_distancePointSegment_..."
        QT_MOC_LITERAL(2813, 76),  // "test_2D_distancePointSegment_..."
        QT_MOC_LITERAL(2890, 52),  // "test_2D_linesParallel_whenGiv..."
        QT_MOC_LITERAL(2943, 50),  // "test_2D_linesParallel_whenGiv..."
        QT_MOC_LITERAL(2994, 53),  // "test_2D_linesCollinear_whenGi..."
        QT_MOC_LITERAL(3048, 51),  // "test_2D_linesCollinear_whenGi..."
        QT_MOC_LITERAL(3100, 69),  // "test_2D_segmentsIntersect_whe..."
        QT_MOC_LITERAL(3170, 54),  // "test_2D_segmentsIntersect_whe..."
        QT_MOC_LITERAL(3225, 69),  // "test_2D_linesIntersection_whe..."
        QT_MOC_LITERAL(3295, 54),  // "test_2D_linesIntersection_whe..."
        QT_MOC_LITERAL(3350, 72),  // "test_2D_segmentsIntersection_..."
        QT_MOC_LITERAL(3423, 57),  // "test_2D_segmentsIntersection_..."
        QT_MOC_LITERAL(3481, 47),  // "test_2D_convexHull_whenGivenA..."
        QT_MOC_LITERAL(3529, 60),  // "test_2D_pointInPolygon_whenGi..."
        QT_MOC_LITERAL(3590, 60)   // "test_2D_pointOnPolygon_whenGi..."
    },
    "TestGeometry",
    "initTestCase",
    "",
    "init",
    "cleanup",
    "cleanupTestCase",
    "test_radiansToDegrees_whenGivenAFloatingPoint_shouldWork",
    "test_degreesToRadians_whenGivenAFloatingPoint_shouldWork",
    "test_operator_degrees_whenGivenAFloatingPoint_shouldWork",
    "test_smallestAngleDiff_whenGivenTwoFloatingPointNumbers_shouldWork",
    "test_normalizeAngle_whenGivenThreeFloatingPointNumbers_shouldWork",
    "test_normalizeInPI_whenGivenAFloatingPoint_shouldWork",
    "test_normalizeIn180_whenGivenAFloatingPoint_shouldWork",
    "test_2D_operatorLess_whenGivenTwoPoints_shouldWork",
    "test2D_fromPolar_whenGivenAFloatingPoint_shouldWork",
    "test2D_fromPolar_whenGivenTwoFloatingPointNumbers_shouldWork",
    "test_2D_dot_whenGivenTwoPoints_shouldWork",
    "test_2D_cross_whenGivenTwoPoints_shouldWork",
    "test_2D_distanceSquared_whenGivenFourNumbers_shouldWork",
    "test_2D_distanceSquared_whenGivenTwoPoints_shouldWork",
    "test_2D_distance_whenGivenFourNumbers_shouldWork",
    "test_2D_distance_whenGivenTwoPoints_shouldWork",
    "test_2D_rotateCW90_whenGivenAPoint_shouldWork",
    "test_2D_rotateCCW90_whenGivenAPoint_shouldWork",
    "test_2D_rotateCW_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_rotateCCW_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_angle_whenGivenAPoint_shouldWork",
    "test_2D_angleBetween_whenGivenTwoPoints_shouldWork",
    "test_2D_lengthSquared_whenGivenAPoint_shouldWork",
    "test_2D_length_whenGivenAPoint_shouldWork",
    "test_2D_norm_whenGivenAPoint_shouldWork",
    "test_2D_manhattanLength_whenGivenAPoint_shouldWork",
    "test_2D_resize_whenGivenAFloatingPointPointAndAFloatingPoint_shouldWor"
    "k",
    "test_2D_normalize_whenGivenAFloatingPointPoint_shouldWork",
    "test_2D_normalize_whenGivenAnIntegerPoint_shouldWork",
    "test_2D_isTriangle_whenGivenThreeNumbers_shouldWork",
    "test_2D_signedArea2_whenGivenAPolygon_shouldWork",
    "test_2D_signedArea_whenGivenAPolygon_shouldWork",
    "test_2D_area2_whenGivenAPolygon_shouldWork",
    "test_2D_area_whenGivenAPolygon_shouldWork",
    "test_2D_centroid_whenGivenAPolygonOfFloatingPointPoints_shouldWork",
    "test_2D_projectPointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_projectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWo"
    "rk",
    "test_2D_distancePointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_distancePointLine_whenGivenALineAndAFloatingPointPoint_shouldW"
    "ork",
    "test_2D_reflectPointLine_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_reflectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWo"
    "rk",
    "test_2D_isOnTheLeft_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_isOnTheLeft_whenGivenALineAndAFloatingPointPoint_shouldWork",
    "test_2D_isOnTheRight_whenGivenThreeFloatingPointPoints_shouldWork",
    "test_2D_isOnTheRight_whenGivenALineAndAFloatingPointPoint_shouldWork",
    "test_2D_projectPointSegment_whenGivenThreeFloatingPointPoints_shouldWo"
    "rk",
    "test_2D_projectPointSegment_whenGivenALineAndAFloatingPointPoint_shoul"
    "dWork",
    "test_2D_distancePointSegment_whenGivenThreeFloatingPointPoints_shouldW"
    "ork",
    "test_2D_distancePointSegment_whenGivenALineAndAFloatingPointPoint_shou"
    "ldWork",
    "test_2D_linesParallel_whenGivenFourPoints_shouldWork",
    "test_2D_linesParallel_whenGivenTwoLines_shouldWork",
    "test_2D_linesCollinear_whenGivenFourPoints_shouldWork",
    "test_2D_linesCollinear_whenGivenTwoLines_shouldWork",
    "test_2D_segmentsIntersect_whenGivenFourFloatingPointPoints_shouldWork",
    "test_2D_segmentsIntersect_whenGivenTwoLines_shouldWork",
    "test_2D_linesIntersection_whenGivenFourFloatingPointPoints_shouldWork",
    "test_2D_linesIntersection_whenGivenTwoLines_shouldWork",
    "test_2D_segmentsIntersection_whenGivenFourFloatingPointPoints_shouldWo"
    "rk",
    "test_2D_segmentsIntersection_whenGivenTwoLines_shouldWork",
    "test_2D_convexHull_whenGivenAPolygon_shouldWork",
    "test_2D_pointInPolygon_whenGivenAPolygonAndAPoint_shouldWork",
    "test_2D_pointOnPolygon_whenGivenAPolygonAndAPoint_shouldWork"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestGeometryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  410,    2, 0x08,    1 /* Private */,
       3,    0,  411,    2, 0x08,    2 /* Private */,
       4,    0,  412,    2, 0x08,    3 /* Private */,
       5,    0,  413,    2, 0x08,    4 /* Private */,
       6,    0,  414,    2, 0x08,    5 /* Private */,
       7,    0,  415,    2, 0x08,    6 /* Private */,
       8,    0,  416,    2, 0x08,    7 /* Private */,
       9,    0,  417,    2, 0x08,    8 /* Private */,
      10,    0,  418,    2, 0x08,    9 /* Private */,
      11,    0,  419,    2, 0x08,   10 /* Private */,
      12,    0,  420,    2, 0x08,   11 /* Private */,
      13,    0,  421,    2, 0x08,   12 /* Private */,
      14,    0,  422,    2, 0x08,   13 /* Private */,
      15,    0,  423,    2, 0x08,   14 /* Private */,
      16,    0,  424,    2, 0x08,   15 /* Private */,
      17,    0,  425,    2, 0x08,   16 /* Private */,
      18,    0,  426,    2, 0x08,   17 /* Private */,
      19,    0,  427,    2, 0x08,   18 /* Private */,
      20,    0,  428,    2, 0x08,   19 /* Private */,
      21,    0,  429,    2, 0x08,   20 /* Private */,
      22,    0,  430,    2, 0x08,   21 /* Private */,
      23,    0,  431,    2, 0x08,   22 /* Private */,
      24,    0,  432,    2, 0x08,   23 /* Private */,
      25,    0,  433,    2, 0x08,   24 /* Private */,
      26,    0,  434,    2, 0x08,   25 /* Private */,
      27,    0,  435,    2, 0x08,   26 /* Private */,
      28,    0,  436,    2, 0x08,   27 /* Private */,
      29,    0,  437,    2, 0x08,   28 /* Private */,
      30,    0,  438,    2, 0x08,   29 /* Private */,
      31,    0,  439,    2, 0x08,   30 /* Private */,
      32,    0,  440,    2, 0x08,   31 /* Private */,
      33,    0,  441,    2, 0x08,   32 /* Private */,
      34,    0,  442,    2, 0x08,   33 /* Private */,
      35,    0,  443,    2, 0x08,   34 /* Private */,
      36,    0,  444,    2, 0x08,   35 /* Private */,
      37,    0,  445,    2, 0x08,   36 /* Private */,
      38,    0,  446,    2, 0x08,   37 /* Private */,
      39,    0,  447,    2, 0x08,   38 /* Private */,
      40,    0,  448,    2, 0x08,   39 /* Private */,
      41,    0,  449,    2, 0x08,   40 /* Private */,
      42,    0,  450,    2, 0x08,   41 /* Private */,
      43,    0,  451,    2, 0x08,   42 /* Private */,
      44,    0,  452,    2, 0x08,   43 /* Private */,
      45,    0,  453,    2, 0x08,   44 /* Private */,
      46,    0,  454,    2, 0x08,   45 /* Private */,
      47,    0,  455,    2, 0x08,   46 /* Private */,
      48,    0,  456,    2, 0x08,   47 /* Private */,
      49,    0,  457,    2, 0x08,   48 /* Private */,
      50,    0,  458,    2, 0x08,   49 /* Private */,
      51,    0,  459,    2, 0x08,   50 /* Private */,
      52,    0,  460,    2, 0x08,   51 /* Private */,
      53,    0,  461,    2, 0x08,   52 /* Private */,
      54,    0,  462,    2, 0x08,   53 /* Private */,
      55,    0,  463,    2, 0x08,   54 /* Private */,
      56,    0,  464,    2, 0x08,   55 /* Private */,
      57,    0,  465,    2, 0x08,   56 /* Private */,
      58,    0,  466,    2, 0x08,   57 /* Private */,
      59,    0,  467,    2, 0x08,   58 /* Private */,
      60,    0,  468,    2, 0x08,   59 /* Private */,
      61,    0,  469,    2, 0x08,   60 /* Private */,
      62,    0,  470,    2, 0x08,   61 /* Private */,
      63,    0,  471,    2, 0x08,   62 /* Private */,
      64,    0,  472,    2, 0x08,   63 /* Private */,
      65,    0,  473,    2, 0x08,   64 /* Private */,
      66,    0,  474,    2, 0x08,   65 /* Private */,
      67,    0,  475,    2, 0x08,   66 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestGeometry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestGeometryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestGeometryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestGeometryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestGeometry, std::true_type>,
        // method 'initTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanupTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_radiansToDegrees_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_degreesToRadians_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_operator_degrees_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_smallestAngleDiff_whenGivenTwoFloatingPointNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_normalizeAngle_whenGivenThreeFloatingPointNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_normalizeInPI_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_normalizeIn180_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_operatorLess_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test2D_fromPolar_whenGivenAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test2D_fromPolar_whenGivenTwoFloatingPointNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_dot_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_cross_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distanceSquared_whenGivenFourNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distanceSquared_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distance_whenGivenFourNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distance_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_rotateCW90_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_rotateCCW90_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_rotateCW_whenGivenAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_rotateCCW_whenGivenAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_angle_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_angleBetween_whenGivenTwoPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_lengthSquared_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_length_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_norm_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_manhattanLength_whenGivenAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_resize_whenGivenAFloatingPointPointAndAFloatingPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_normalize_whenGivenAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_normalize_whenGivenAnIntegerPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_isTriangle_whenGivenThreeNumbers_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_signedArea2_whenGivenAPolygon_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_signedArea_whenGivenAPolygon_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_area2_whenGivenAPolygon_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_area_whenGivenAPolygon_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_centroid_whenGivenAPolygonOfFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_projectPointLine_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_projectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distancePointLine_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distancePointLine_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_reflectPointLine_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_reflectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_isOnTheLeft_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_isOnTheLeft_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_isOnTheRight_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_isOnTheRight_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_projectPointSegment_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_projectPointSegment_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distancePointSegment_whenGivenThreeFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_distancePointSegment_whenGivenALineAndAFloatingPointPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesParallel_whenGivenFourPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesParallel_whenGivenTwoLines_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesCollinear_whenGivenFourPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesCollinear_whenGivenTwoLines_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_segmentsIntersect_whenGivenFourFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_segmentsIntersect_whenGivenTwoLines_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesIntersection_whenGivenFourFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_linesIntersection_whenGivenTwoLines_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_segmentsIntersection_whenGivenFourFloatingPointPoints_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_segmentsIntersection_whenGivenTwoLines_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_convexHull_whenGivenAPolygon_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_pointInPolygon_whenGivenAPolygonAndAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_2D_pointOnPolygon_whenGivenAPolygonAndAPoint_shouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestGeometry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->cleanupTestCase(); break;
        case 4: _t->test_radiansToDegrees_whenGivenAFloatingPoint_shouldWork(); break;
        case 5: _t->test_degreesToRadians_whenGivenAFloatingPoint_shouldWork(); break;
        case 6: _t->test_operator_degrees_whenGivenAFloatingPoint_shouldWork(); break;
        case 7: _t->test_smallestAngleDiff_whenGivenTwoFloatingPointNumbers_shouldWork(); break;
        case 8: _t->test_normalizeAngle_whenGivenThreeFloatingPointNumbers_shouldWork(); break;
        case 9: _t->test_normalizeInPI_whenGivenAFloatingPoint_shouldWork(); break;
        case 10: _t->test_normalizeIn180_whenGivenAFloatingPoint_shouldWork(); break;
        case 11: _t->test_2D_operatorLess_whenGivenTwoPoints_shouldWork(); break;
        case 12: _t->test2D_fromPolar_whenGivenAFloatingPoint_shouldWork(); break;
        case 13: _t->test2D_fromPolar_whenGivenTwoFloatingPointNumbers_shouldWork(); break;
        case 14: _t->test_2D_dot_whenGivenTwoPoints_shouldWork(); break;
        case 15: _t->test_2D_cross_whenGivenTwoPoints_shouldWork(); break;
        case 16: _t->test_2D_distanceSquared_whenGivenFourNumbers_shouldWork(); break;
        case 17: _t->test_2D_distanceSquared_whenGivenTwoPoints_shouldWork(); break;
        case 18: _t->test_2D_distance_whenGivenFourNumbers_shouldWork(); break;
        case 19: _t->test_2D_distance_whenGivenTwoPoints_shouldWork(); break;
        case 20: _t->test_2D_rotateCW90_whenGivenAPoint_shouldWork(); break;
        case 21: _t->test_2D_rotateCCW90_whenGivenAPoint_shouldWork(); break;
        case 22: _t->test_2D_rotateCW_whenGivenAFloatingPointPoint_shouldWork(); break;
        case 23: _t->test_2D_rotateCCW_whenGivenAFloatingPointPoint_shouldWork(); break;
        case 24: _t->test_2D_angle_whenGivenAPoint_shouldWork(); break;
        case 25: _t->test_2D_angleBetween_whenGivenTwoPoints_shouldWork(); break;
        case 26: _t->test_2D_lengthSquared_whenGivenAPoint_shouldWork(); break;
        case 27: _t->test_2D_length_whenGivenAPoint_shouldWork(); break;
        case 28: _t->test_2D_norm_whenGivenAPoint_shouldWork(); break;
        case 29: _t->test_2D_manhattanLength_whenGivenAPoint_shouldWork(); break;
        case 30: _t->test_2D_resize_whenGivenAFloatingPointPointAndAFloatingPoint_shouldWork(); break;
        case 31: _t->test_2D_normalize_whenGivenAFloatingPointPoint_shouldWork(); break;
        case 32: _t->test_2D_normalize_whenGivenAnIntegerPoint_shouldWork(); break;
        case 33: _t->test_2D_isTriangle_whenGivenThreeNumbers_shouldWork(); break;
        case 34: _t->test_2D_signedArea2_whenGivenAPolygon_shouldWork(); break;
        case 35: _t->test_2D_signedArea_whenGivenAPolygon_shouldWork(); break;
        case 36: _t->test_2D_area2_whenGivenAPolygon_shouldWork(); break;
        case 37: _t->test_2D_area_whenGivenAPolygon_shouldWork(); break;
        case 38: _t->test_2D_centroid_whenGivenAPolygonOfFloatingPointPoints_shouldWork(); break;
        case 39: _t->test_2D_projectPointLine_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 40: _t->test_2D_projectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 41: _t->test_2D_distancePointLine_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 42: _t->test_2D_distancePointLine_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 43: _t->test_2D_reflectPointLine_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 44: _t->test_2D_reflectPointLine_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 45: _t->test_2D_isOnTheLeft_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 46: _t->test_2D_isOnTheLeft_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 47: _t->test_2D_isOnTheRight_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 48: _t->test_2D_isOnTheRight_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 49: _t->test_2D_projectPointSegment_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 50: _t->test_2D_projectPointSegment_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 51: _t->test_2D_distancePointSegment_whenGivenThreeFloatingPointPoints_shouldWork(); break;
        case 52: _t->test_2D_distancePointSegment_whenGivenALineAndAFloatingPointPoint_shouldWork(); break;
        case 53: _t->test_2D_linesParallel_whenGivenFourPoints_shouldWork(); break;
        case 54: _t->test_2D_linesParallel_whenGivenTwoLines_shouldWork(); break;
        case 55: _t->test_2D_linesCollinear_whenGivenFourPoints_shouldWork(); break;
        case 56: _t->test_2D_linesCollinear_whenGivenTwoLines_shouldWork(); break;
        case 57: _t->test_2D_segmentsIntersect_whenGivenFourFloatingPointPoints_shouldWork(); break;
        case 58: _t->test_2D_segmentsIntersect_whenGivenTwoLines_shouldWork(); break;
        case 59: _t->test_2D_linesIntersection_whenGivenFourFloatingPointPoints_shouldWork(); break;
        case 60: _t->test_2D_linesIntersection_whenGivenTwoLines_shouldWork(); break;
        case 61: _t->test_2D_segmentsIntersection_whenGivenFourFloatingPointPoints_shouldWork(); break;
        case 62: _t->test_2D_segmentsIntersection_whenGivenTwoLines_shouldWork(); break;
        case 63: _t->test_2D_convexHull_whenGivenAPolygon_shouldWork(); break;
        case 64: _t->test_2D_pointInPolygon_whenGivenAPolygonAndAPoint_shouldWork(); break;
        case 65: _t->test_2D_pointOnPolygon_whenGivenAPolygonAndAPoint_shouldWork(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestGeometryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 66;
    }
    return _id;
}
QT_WARNING_POP
