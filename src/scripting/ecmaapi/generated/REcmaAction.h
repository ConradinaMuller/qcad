// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAACTION_H
        #define RECMAACTION_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RAction.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaAction {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        terminate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isTerminated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNoState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasNoState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUniqueGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUniqueGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverrideBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOverrideBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGuiAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGuiAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsScenes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setClickMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClickMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        beginEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        finishEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showDialog
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        suspendEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resumeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        escapeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyPressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mousePressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseDoubleClickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        wheelEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        tabletEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        swipeGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        panGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        pinchGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        entityPickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        entityPickEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        propertyChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updatePreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyOperation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        snap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RAction* getSelf(const QString& fName, QScriptContext* context)
    ;static RAction* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumClickMode(QScriptEngine* engine, const RAction::ClickMode& value)
    ;static  void fromScriptValueEnumClickMode(const QScriptValue& value, RAction::ClickMode& out)
    ;};
    #endif
    