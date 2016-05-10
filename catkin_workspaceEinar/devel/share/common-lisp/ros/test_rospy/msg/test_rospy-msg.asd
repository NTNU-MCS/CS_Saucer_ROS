
(cl:in-package :asdf)

(defsystem "test_rospy-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
               :test_rosmaster-msg
)
  :components ((:file "_package")
    (:file "EmbedTest" :depends-on ("_package_EmbedTest"))
    (:file "_package_EmbedTest" :depends-on ("_package"))
    (:file "TransitiveMsg2" :depends-on ("_package_TransitiveMsg2"))
    (:file "_package_TransitiveMsg2" :depends-on ("_package"))
    (:file "Floats" :depends-on ("_package_Floats"))
    (:file "_package_Floats" :depends-on ("_package"))
    (:file "HeaderVal" :depends-on ("_package_HeaderVal"))
    (:file "_package_HeaderVal" :depends-on ("_package"))
    (:file "HeaderHeaderVal" :depends-on ("_package_HeaderHeaderVal"))
    (:file "_package_HeaderHeaderVal" :depends-on ("_package"))
    (:file "TestFixedArray" :depends-on ("_package_TestFixedArray"))
    (:file "_package_TestFixedArray" :depends-on ("_package"))
    (:file "ArrayVal" :depends-on ("_package_ArrayVal"))
    (:file "_package_ArrayVal" :depends-on ("_package"))
    (:file "PythonKeyword" :depends-on ("_package_PythonKeyword"))
    (:file "_package_PythonKeyword" :depends-on ("_package"))
    (:file "Empty" :depends-on ("_package_Empty"))
    (:file "_package_Empty" :depends-on ("_package"))
    (:file "TransitiveMsg1" :depends-on ("_package_TransitiveMsg1"))
    (:file "_package_TransitiveMsg1" :depends-on ("_package"))
    (:file "Val" :depends-on ("_package_Val"))
    (:file "_package_Val" :depends-on ("_package"))
    (:file "TransitiveImport" :depends-on ("_package_TransitiveImport"))
    (:file "_package_TransitiveImport" :depends-on ("_package"))
    (:file "TestConstants" :depends-on ("_package_TestConstants"))
    (:file "_package_TestConstants" :depends-on ("_package"))
  ))