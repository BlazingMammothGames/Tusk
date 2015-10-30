#ifndef INCLUDED_haxe_crypto_Adler32
#define INCLUDED_haxe_crypto_Adler32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Adler32)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Adler32_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Adler32_obj OBJ_;
		Adler32_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Adler32")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Adler32_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Adler32_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Adler32","\xd5","\x1c","\x03","\xfd"); }

		static ::haxe::crypto::Adler32 read( ::haxe::io::Input i);
		static Dynamic read_dyn();

		static int make( ::haxe::io::Bytes b);
		static Dynamic make_dyn();

		int a1;
		int a2;
		virtual int get( );
		Dynamic get_dyn();

		virtual Void update( ::haxe::io::Bytes b,int pos,int len);
		Dynamic update_dyn();

		virtual bool equals( ::haxe::crypto::Adler32 a);
		Dynamic equals_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Adler32 */ 