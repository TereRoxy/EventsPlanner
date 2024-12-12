/****************************************************************************
** Meta object code from reading C++ file 'AdminWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AdminWindow.h"
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
#error "The header file 'AdminWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAdminWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAdminWindowENDCLASS = QtMocHelpers::stringData(
    "AdminWindow",
    "backToMain",
    "",
    "handleDeleteEvent",
    "handleViewEvents",
    "handleEditEvent",
    "handleCancel",
    "handleSaveChanges",
    "handleUndo",
    "handleRedo",
    "goBack"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdminWindowENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdminWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdminWindowENDCLASS_t qt_meta_stringdata_CLASSAdminWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AdminWindow"
        QT_MOC_LITERAL(12, 10),  // "backToMain"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 17),  // "handleDeleteEvent"
        QT_MOC_LITERAL(42, 16),  // "handleViewEvents"
        QT_MOC_LITERAL(59, 15),  // "handleEditEvent"
        QT_MOC_LITERAL(75, 12),  // "handleCancel"
        QT_MOC_LITERAL(88, 17),  // "handleSaveChanges"
        QT_MOC_LITERAL(106, 10),  // "handleUndo"
        QT_MOC_LITERAL(117, 10),  // "handleRedo"
        QT_MOC_LITERAL(128, 6)   // "goBack"
    },
    "AdminWindow",
    "backToMain",
    "",
    "handleDeleteEvent",
    "handleViewEvents",
    "handleEditEvent",
    "handleCancel",
    "handleSaveChanges",
    "handleUndo",
    "handleRedo",
    "goBack"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdminWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdminWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdminWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdminWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminWindow, std::true_type>,
        // method 'backToMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDeleteEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleViewEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleEditEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSaveChanges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleRedo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backToMain(); break;
        case 1: _t->handleDeleteEvent(); break;
        case 2: _t->handleViewEvents(); break;
        case 3: _t->handleEditEvent(); break;
        case 4: _t->handleCancel(); break;
        case 5: _t->handleSaveChanges(); break;
        case 6: _t->handleUndo(); break;
        case 7: _t->handleRedo(); break;
        case 8: _t->goBack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminWindow::*)();
            if (_t _q_method = &AdminWindow::backToMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdminWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AdminWindow::backToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
