#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys__FileSystem_FileKind
#include <sys/_FileSystem/FileKind.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

bool FileSystem_obj::exists( ::String path){
	HX_STACK_FRAME("sys.FileSystem","exists",0xf55bed9e,"sys.FileSystem.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",33,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(34)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = ::sys::FileSystem_obj::sys_exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,exists,return )

Void FileSystem_obj::rename( ::String path,::String newPath){
{
		HX_STACK_FRAME("sys.FileSystem","rename",0x3aa2fb40,"sys.FileSystem.rename","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",37,0xb7079c8b)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(newPath,"newPath")
		HX_STACK_LINE(38)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = newPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Dynamic tmp2 = ::sys::FileSystem_obj::sys_rename(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		if ((tmp3)){
			HX_STACK_LINE(39)
			::String tmp4 = (HX_HCSTRING("Could not rename:","\x30","\x7f","\x9c","\x4b") + path);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			::String tmp5 = (tmp4 + HX_HCSTRING(" to ","\x25","\x3a","\x7f","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			::String tmp6 = newPath;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			HX_STACK_DO_THROW(tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileSystem_obj,rename,(void))

Dynamic FileSystem_obj::stat( ::String path){
	HX_STACK_FRAME("sys.FileSystem","stat",0xa630df16,"sys.FileSystem.stat","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",42,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(43)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Dynamic tmp1 = ::sys::FileSystem_obj::sys_stat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Dynamic s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(44)
	bool tmp2 = (s == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	if ((tmp2)){
		HX_STACK_LINE(45)
		::Date tmp3 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		::Date tmp4 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::Date tmp5 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_1{
			inline static Dynamic Block( ::Date &tmp5,::Date &tmp4,::Date &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",45,0xb7079c8b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("uid","\x90","\x23","\x59","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26") , tmp3,false);
					__result->Add(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f") , tmp4,false);
					__result->Add(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d") , tmp5,false);
					__result->Add(HX_HCSTRING("dev","\xd5","\x39","\x4c","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("ino","\xea","\x0c","\x50","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("nlink","\x68","\xe7","\xc6","\x9d") , (int)0,false);
					__result->Add(HX_HCSTRING("rdev","\xa3","\x8c","\xa6","\x4b") , (int)0,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , (int)0,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		return tmp6;
	}
	HX_STACK_LINE(46)
	Float tmp3 = (((Float)1000.0) * s->__Field(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::Date tmp4 = ::Date_obj::fromTime(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	s->__FieldRef(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26")) = tmp4;
	HX_STACK_LINE(47)
	Float tmp5 = (((Float)1000.0) * s->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	::Date tmp6 = ::Date_obj::fromTime(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(47)
	s->__FieldRef(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f")) = tmp6;
	HX_STACK_LINE(48)
	Float tmp7 = (((Float)1000.0) * s->__Field(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	::Date tmp8 = ::Date_obj::fromTime(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	s->__FieldRef(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d")) = tmp8;
	HX_STACK_LINE(49)
	Dynamic tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,stat,return )

::String FileSystem_obj::fullPath( ::String relPath){
	HX_STACK_FRAME("sys.FileSystem","fullPath",0xc6463316,"sys.FileSystem.fullPath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",52,0xb7079c8b)
	HX_STACK_ARG(relPath,"relPath")
	HX_STACK_LINE(53)
	::String tmp = relPath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::String tmp1 = ::sys::FileSystem_obj::file_full_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::String tmp2 = ::String(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,fullPath,return )

::String FileSystem_obj::absolutePath( ::String relPath){
	HX_STACK_FRAME("sys.FileSystem","absolutePath",0x5973f4fe,"sys.FileSystem.absolutePath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",56,0xb7079c8b)
	HX_STACK_ARG(relPath,"relPath")
	HX_STACK_LINE(57)
	::String tmp = relPath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = ::haxe::io::Path_obj::isAbsolute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(57)
		::String tmp2 = relPath;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		return tmp2;
	}
	HX_STACK_LINE(58)
	::String tmp2 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::String tmp3 = relPath;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::String tmp4 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,absolutePath,return )

::sys::_FileSystem::FileKind FileSystem_obj::kind( ::String path){
	HX_STACK_FRAME("sys.FileSystem","kind",0xa0dedc96,"sys.FileSystem.kind","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",61,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(62)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::String tmp1 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	::String tmp2 = ::sys::FileSystem_obj::sys_file_type(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	::String k = tmp2;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	::String tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::sys::_FileSystem::FileKind tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::String _switch_1 = (tmp3);
	if (  ( _switch_1==HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"))){
		HX_STACK_LINE(64)
		tmp4 = ::sys::_FileSystem::FileKind_obj::kfile;
	}
	else if (  ( _switch_1==HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"))){
		HX_STACK_LINE(65)
		tmp4 = ::sys::_FileSystem::FileKind_obj::kdir;
	}
	else  {
		HX_STACK_LINE(66)
		::String tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		tmp4 = ::sys::_FileSystem::FileKind_obj::kother(tmp5);
	}
;
;
	HX_STACK_LINE(63)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,kind,return )

bool FileSystem_obj::isDirectory( ::String path){
	HX_STACK_FRAME("sys.FileSystem","isDirectory",0x6c577a21,"sys.FileSystem.isDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",70,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(71)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::sys::_FileSystem::FileKind tmp1 = ::sys::FileSystem_obj::kind(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = (tmp1 == ::sys::_FileSystem::FileKind_obj::kdir);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,isDirectory,return )

Void FileSystem_obj::createDirectory( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","createDirectory",0x63bad3cf,"sys.FileSystem.createDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",74,0xb7079c8b)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(75)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::String tmp1 = ::haxe::io::Path_obj::addTrailingSlash(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::String path1 = tmp1;		HX_STACK_VAR(path1,"path1");
		HX_STACK_LINE(76)
		::String _p = null();		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(77)
		Array< ::String > parts = Array_obj< ::String >::__new();		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			::String tmp2 = path1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::String tmp3 = path1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::String tmp4 = ::haxe::io::Path_obj::directory(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			::String tmp5 = _p = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			bool tmp6 = (tmp2 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			if ((tmp7)){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(79)
			::String tmp8 = path1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			parts->unshift(tmp8);
			HX_STACK_LINE(80)
			path1 = _p;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			while((true)){
				HX_STACK_LINE(82)
				bool tmp2 = (_g < parts->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					break;
				}
				HX_STACK_LINE(82)
				::String tmp4 = parts->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				::String part = tmp4;		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(82)
				++(_g);
				HX_STACK_LINE(83)
				int tmp5 = (part.length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				Dynamic tmp6 = part.charCodeAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				bool tmp7 = (tmp6 != (int)58);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				if ((tmp8)){
					HX_STACK_LINE(83)
					::String tmp10 = part;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(83)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					bool tmp13 = ::sys::FileSystem_obj::exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(83)
					tmp9 = !(tmp17);
				}
				else{
					HX_STACK_LINE(83)
					tmp9 = false;
				}
				HX_STACK_LINE(83)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(83)
				if ((tmp9)){
					HX_STACK_LINE(83)
					::String tmp11 = part;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					Dynamic tmp13 = ::sys::FileSystem_obj::sys_create_dir(tmp12,(int)493);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					tmp10 = (tmp14 == null());
				}
				else{
					HX_STACK_LINE(83)
					tmp10 = false;
				}
				HX_STACK_LINE(83)
				if ((tmp10)){
					HX_STACK_LINE(84)
					::String tmp11 = (HX_HCSTRING("Could not create directory:","\x05","\x3d","\x91","\x19") + part);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(84)
					HX_STACK_DO_THROW(tmp11);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,createDirectory,(void))

Void FileSystem_obj::deleteFile( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","deleteFile",0x4bd48509,"sys.FileSystem.deleteFile","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",88,0xb7079c8b)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(89)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Dynamic tmp1 = ::sys::FileSystem_obj::file_delete(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::String tmp3 = (HX_HCSTRING("Could not delete file:","\xd5","\xc3","\x43","\x01") + path);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			HX_STACK_DO_THROW(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,deleteFile,(void))

Void FileSystem_obj::deleteDirectory( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","deleteDirectory",0x052a5cc0,"sys.FileSystem.deleteDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",93,0xb7079c8b)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(94)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Dynamic tmp1 = ::sys::FileSystem_obj::sys_remove_dir(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		if ((tmp2)){
			HX_STACK_LINE(95)
			::String tmp3 = (HX_HCSTRING("Could not delete directory:","\x36","\xa4","\xa9","\x9c") + path);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			HX_STACK_DO_THROW(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,deleteDirectory,(void))

Array< ::String > FileSystem_obj::readDirectory( ::String path){
	HX_STACK_FRAME("sys.FileSystem","readDirectory",0x0619f8b5,"sys.FileSystem.readDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",98,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(99)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	return ::sys::FileSystem_obj::sys_read_dir(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,readDirectory,return )

Dynamic FileSystem_obj::sys_exists;

Dynamic FileSystem_obj::file_delete;

Dynamic FileSystem_obj::sys_rename;

Dynamic FileSystem_obj::sys_stat;

Dynamic FileSystem_obj::sys_file_type;

Dynamic FileSystem_obj::sys_create_dir;

Dynamic FileSystem_obj::sys_remove_dir;

Dynamic FileSystem_obj::sys_read_dir;

Dynamic FileSystem_obj::file_full_path;


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { outValue = stat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"kind") ) { outValue = kind_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rename") ) { outValue = rename_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { outValue = fullPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_stat") ) { outValue = sys_stat; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deleteFile") ) { outValue = deleteFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_exists") ) { outValue = sys_exists; return true;  }
		if (HX_FIELD_EQ(inName,"sys_rename") ) { outValue = sys_rename; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { outValue = isDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"file_delete") ) { outValue = file_delete; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"absolutePath") ) { outValue = absolutePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_read_dir") ) { outValue = sys_read_dir; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readDirectory") ) { outValue = readDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_file_type") ) { outValue = sys_file_type; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { outValue = sys_create_dir; return true;  }
		if (HX_FIELD_EQ(inName,"sys_remove_dir") ) { outValue = sys_remove_dir; return true;  }
		if (HX_FIELD_EQ(inName,"file_full_path") ) { outValue = file_full_path; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createDirectory") ) { outValue = createDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteDirectory") ) { outValue = deleteDirectory_dyn(); return true;  }
	}
	return false;
}

bool FileSystem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sys_stat") ) { sys_stat=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { sys_exists=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"sys_rename") ) { sys_rename=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_delete") ) { file_delete=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_read_dir") ) { sys_read_dir=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sys_file_type") ) { sys_file_type=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { sys_create_dir=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"sys_remove_dir") ) { sys_remove_dir=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_full_path") ) { file_full_path=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_exists,HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::file_delete,HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_rename,HX_HCSTRING("sys_rename","\xb0","\xfb","\xd5","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_stat,HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_file_type,HX_HCSTRING("sys_file_type","\xab","\x19","\x94","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_create_dir,HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_remove_dir,HX_HCSTRING("sys_remove_dir","\xc4","\x61","\xbd","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_read_dir,HX_HCSTRING("sys_read_dir","\x56","\xf1","\x5e","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::file_full_path,HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_rename,"sys_rename");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_file_type,"sys_file_type");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_remove_dir,"sys_remove_dir");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_read_dir,"sys_read_dir");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_rename,"sys_rename");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_file_type,"sys_file_type");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_remove_dir,"sys_remove_dir");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_read_dir,"sys_read_dir");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("rename","\x7e","\x2b","\x27","\x05"),
	HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c"),
	HX_HCSTRING("fullPath","\xd4","\x6e","\x65","\x5e"),
	HX_HCSTRING("absolutePath","\xbc","\xe7","\x6e","\xf7"),
	HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"),
	HX_HCSTRING("isDirectory","\x23","\xa9","\xc5","\xee"),
	HX_HCSTRING("createDirectory","\xd1","\xab","\x39","\xb1"),
	HX_HCSTRING("deleteFile","\x47","\xac","\x08","\x97"),
	HX_HCSTRING("deleteDirectory","\xc2","\x34","\xa9","\x52"),
	HX_HCSTRING("readDirectory","\x37","\x6c","\xb3","\xa3"),
	HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),
	HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f"),
	HX_HCSTRING("sys_rename","\xb0","\xfb","\xd5","\x3a"),
	HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53"),
	HX_HCSTRING("sys_file_type","\xab","\x19","\x94","\x17"),
	HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e"),
	HX_HCSTRING("sys_remove_dir","\xc4","\x61","\xbd","\x98"),
	HX_HCSTRING("sys_read_dir","\x56","\xf1","\x5e","\x97"),
	HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04"),
	::String(null()) };

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &FileSystem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void FileSystem_obj::__boot()
{
	sys_exists= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),(int)1);
	file_delete= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f"),(int)1);
	sys_rename= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_rename","\xb0","\xfb","\xd5","\x3a"),(int)2);
	sys_stat= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53"),(int)1);
	sys_file_type= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_file_type","\xab","\x19","\x94","\x17"),(int)1);
	sys_create_dir= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e"),(int)2);
	sys_remove_dir= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_remove_dir","\xc4","\x61","\xbd","\x98"),(int)1);
	sys_read_dir= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_read_dir","\x56","\xf1","\x5e","\x97"),(int)1);
	file_full_path= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04"),(int)1);
}

} // end namespace sys