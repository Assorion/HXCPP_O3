// Generated by Haxe 4.3.1
#ifndef INCLUDED_Stripper
#define INCLUDED_Stripper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Stripper)



class HXCPP_CLASS_ATTRIBUTES Stripper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stripper_obj OBJ_;
		Stripper_obj();

	public:
		enum { _hx_ClassId = 0x12c507e5 };

		void __construct(::String inExe);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Stripper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Stripper"); }
		static ::hx::ObjectPtr< Stripper_obj > __new(::String inExe);
		static ::hx::ObjectPtr< Stripper_obj > __alloc(::hx::Ctx *_hx_ctx,::String inExe);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stripper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stripper",25,15,34,b7); }

		::String mExe;
		::Array< ::String > mFlags;
		void strip(::String inTarget);
		::Dynamic strip_dyn();

};


#endif /* INCLUDED_Stripper */ 