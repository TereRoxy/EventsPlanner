/****************************************************************************
** Meta object code from reading C++ file 'UserWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UserWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSSelectFileWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSelectFileWindowENDCLASS = QtMocHelpers::stringData(
    "SelectFileWindow",
    "setCSV",
    "",
    "setHTML",
    "handleCSV",
    "handleHTML"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSelectFileWindowENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[17];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[10];
    char stringdata5[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSelectFileWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSelectFileWindowENDCLASS_t qt_meta_stringdata_CLASSSelectFileWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "SelectFileWindow"
        QT_MOC_LITERAL(17, 6),  // "setCSV"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "setHTML"
        QT_MOC_LITERAL(33, 9),  // "handleCSV"
        QT_MOC_LITERAL(43, 10)   // "handleHTML"
    },
    "SelectFileWindow",
    "setCSV",
    "",
    "setHTML",
    "handleCSV",
    "handleHTML"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSelectFileWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SelectFileWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSelectFileWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSelectFileWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSelectFileWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelectFileWindow, std::true_type>,
        // method 'setCSV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHTML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCSV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleHTML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SelectFileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectFileWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCSV(); break;
        case 1: _t->setHTML(); break;
        case 2: _t->handleCSV(); break;
        case 3: _t->handleHTML(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectFileWindow::*)();
            if (_t _q_method = &SelectFileWindow::setCSV; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SelectFileWindow::*)();
            if (_t _q_method = &SelectFileWindow::setHTML; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SelectFileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectFileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSelectFileWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SelectFileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SelectFileWindow::setCSV()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SelectFileWindow::setHTML()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUserWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserWindowENDCLASS = QtMocHelpers::stringData(
    "UserWindow",
    "backToMain",
    "",
    "goBack",
    "handleSave",
    "handleOpen",
    "handleDelete",
    "handleSeeEventsByMonth",
    "handleGetUserEvents",
    "handleAddEvent",
    "handleNextEvent",
    "showUserEventsWindow",
    "handleSaveCSV",
    "handleSaveHTML"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[23];
    char stringdata8[20];
    char stringdata9[15];
    char stringdata10[16];
    char stringdata11[21];
    char stringdata12[14];
    char stringdata13[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserWindowENDCLASS_t qt_meta_stringdata_CLASSUserWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "UserWindow"
        QT_MOC_LITERAL(11, 10),  // "backToMain"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 6),  // "goBack"
        QT_MOC_LITERAL(30, 10),  // "handleSave"
        QT_MOC_LITERAL(41, 10),  // "handleOpen"
        QT_MOC_LITERAL(52, 12),  // "handleDelete"
        QT_MOC_LITERAL(65, 22),  // "handleSeeEventsByMonth"
        QT_MOC_LITERAL(88, 19),  // "handleGetUserEvents"
        QT_MOC_LITERAL(108, 14),  // "handleAddEvent"
        QT_MOC_LITERAL(123, 15),  // "handleNextEvent"
        QT_MOC_LITERAL(139, 20),  // "showUserEventsWindow"
        QT_MOC_LITERAL(160, 13),  // "handleSaveCSV"
        QT_MOC_LITERAL(174, 14)   // "handleSaveHTML"
    },
    "UserWindow",
    "backToMain",
    "",
    "goBack",
    "handleSave",
    "handleOpen",
    "handleDelete",
    "handleSeeEventsByMonth",
    "handleGetUserEvents",
    "handleAddEvent",
    "handleNextEvent",
    "showUserEventsWindow",
    "handleSaveCSV",
    "handleSaveHTML"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    0,   96,    2, 0x08,   11 /* Private */,
      13,    0,   97,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject UserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserWindow, std::true_type>,
        // method 'backToMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSeeEventsByMonth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleGetUserEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleAddEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleNextEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showUserEventsWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSaveCSV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSaveHTML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backToMain(); break;
        case 1: _t->goBack(); break;
        case 2: _t->handleSave(); break;
        case 3: _t->handleOpen(); break;
        case 4: _t->handleDelete(); break;
        case 5: _t->handleSeeEventsByMonth(); break;
        case 6: _t->handleGetUserEvents(); break;
        case 7: _t->handleAddEvent(); break;
        case 8: _t->handleNextEvent(); break;
        case 9: _t->showUserEventsWindow(); break;
        case 10: _t->handleSaveCSV(); break;
        case 11: _t->handleSaveHTML(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserWindow::*)();
            if (_t _q_method = &UserWindow::backToMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *UserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UserWindow::backToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
