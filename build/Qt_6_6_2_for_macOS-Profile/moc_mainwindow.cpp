/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "handleCardClick",
    "",
    "populateSceneWithCards",
    "on_startGameBtn_clicked",
    "on_startTurnBtn_clicked",
    "on_quitGameBtn_clicked",
    "disableAllCards",
    "selectable",
    "updateScoreboard",
    "updateUserData",
    "endGame",
    "on_timerCardDoubleClicked",
    "on_glancerCardDoubleClicked",
    "on_doubleCardDoubleClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[23];
    char stringdata7[16];
    char stringdata8[11];
    char stringdata9[17];
    char stringdata10[15];
    char stringdata11[8];
    char stringdata12[26];
    char stringdata13[28];
    char stringdata14[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "handleCardClick"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 22),  // "populateSceneWithCards"
        QT_MOC_LITERAL(51, 23),  // "on_startGameBtn_clicked"
        QT_MOC_LITERAL(75, 23),  // "on_startTurnBtn_clicked"
        QT_MOC_LITERAL(99, 22),  // "on_quitGameBtn_clicked"
        QT_MOC_LITERAL(122, 15),  // "disableAllCards"
        QT_MOC_LITERAL(138, 10),  // "selectable"
        QT_MOC_LITERAL(149, 16),  // "updateScoreboard"
        QT_MOC_LITERAL(166, 14),  // "updateUserData"
        QT_MOC_LITERAL(181, 7),  // "endGame"
        QT_MOC_LITERAL(189, 25),  // "on_timerCardDoubleClicked"
        QT_MOC_LITERAL(215, 27),  // "on_glancerCardDoubleClicked"
        QT_MOC_LITERAL(243, 26)   // "on_doubleCardDoubleClicked"
    },
    "MainWindow",
    "handleCardClick",
    "",
    "populateSceneWithCards",
    "on_startGameBtn_clicked",
    "on_startTurnBtn_clicked",
    "on_quitGameBtn_clicked",
    "disableAllCards",
    "selectable",
    "updateScoreboard",
    "updateUserData",
    "endGame",
    "on_timerCardDoubleClicked",
    "on_glancerCardDoubleClicked",
    "on_doubleCardDoubleClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    1,   91,    2, 0x08,    6 /* Private */,
       9,    0,   94,    2, 0x08,    8 /* Private */,
      10,    0,   95,    2, 0x08,    9 /* Private */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    0,   97,    2, 0x08,   11 /* Private */,
      13,    0,   98,    2, 0x08,   12 /* Private */,
      14,    0,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'handleCardClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populateSceneWithCards'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startGameBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startTurnBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_quitGameBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableAllCards'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateScoreboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUserData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timerCardDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_glancerCardDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_doubleCardDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleCardClick(); break;
        case 1: _t->populateSceneWithCards(); break;
        case 2: _t->on_startGameBtn_clicked(); break;
        case 3: _t->on_startTurnBtn_clicked(); break;
        case 4: _t->on_quitGameBtn_clicked(); break;
        case 5: _t->disableAllCards((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->updateScoreboard(); break;
        case 7: _t->updateUserData(); break;
        case 8: _t->endGame(); break;
        case 9: _t->on_timerCardDoubleClicked(); break;
        case 10: _t->on_glancerCardDoubleClicked(); break;
        case 11: _t->on_doubleCardDoubleClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
