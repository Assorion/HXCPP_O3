// Generated by Haxe 4.3.1
#ifndef INCLUDED_Prelinker
#define INCLUDED_Prelinker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Compiler)
HX_DECLARE_CLASS0(Prelinker)
HX_DECLARE_CLASS0(Target)



class HXCPP_CLASS_ATTRIBUTES Prelinker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Prelinker_obj OBJ_;
		Prelinker_obj();

	public:
		enum { _hx_ClassId = 0x7bc7d46a };

		void __construct(::String inExe);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Prelinker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Prelinker"); }
		static ::hx::ObjectPtr< Prelinker_obj > __new(::String inExe);
		static ::hx::ObjectPtr< Prelinker_obj > __alloc(::hx::Ctx *_hx_ctx,::String inExe);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Prelinker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Prelinker",2a,5f,84,b8); }

		::String mExe;
		::Array< ::String > mFlags;
		::String mOutFlag;
		::String mFromFile;
		bool mExpandArchives;
		bool isOutOfDate(::String inName,::Array< ::String > inObjs);
		::Dynamic isOutOfDate_dyn();

		::String prelink( ::Target inTarget,::Array< ::String > inObjs, ::Compiler inCompiler);
		::Dynamic prelink_dyn();

};


#endif /* INCLUDED_Prelinker */ 