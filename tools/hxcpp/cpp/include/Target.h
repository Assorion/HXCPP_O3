// Generated by Haxe 4.3.1
#ifndef INCLUDED_Target
#define INCLUDED_Target

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(File)
HX_DECLARE_CLASS0(FileGroup)
HX_DECLARE_CLASS0(Target)



class HXCPP_CLASS_ATTRIBUTES Target_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Target_obj OBJ_;
		Target_obj();

	public:
		enum { _hx_ClassId = 0x1ccc2a31 };

		void __construct(::String inOutput,::String inTool,::String inToolID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Target")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Target"); }
		static ::hx::ObjectPtr< Target_obj > __new(::String inOutput,::String inTool,::String inToolID);
		static ::hx::ObjectPtr< Target_obj > __alloc(::hx::Ctx *_hx_ctx,::String inOutput,::String inTool,::String inToolID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Target_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Target",71,67,81,bb); }

		::String mBuildDir;
		::String mOutput;
		::String mOutputDir;
		::String mTool;
		::String mToolID;
		::String mExt;
		::String mFullOutputName;
		::String mFullUnstrippedName;
		::Array< ::Dynamic> mFiles;
		::Array< ::Dynamic> mFileGroups;
		::Array< ::String > mDepends;
		::Array< ::String > mSubTargets;
		::Array< ::String > mAutoLibs;
		::Array< ::String > mLibs;
		::Array< ::String > mLibPaths;
		::Array< ::String > mFlags;
		::Array< ::String > mErrors;
		::Array< ::String > mDirs;
		void merge( ::Target other);
		::Dynamic merge_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String getExt(::String inDefault);
		::Dynamic getExt_dyn();

		void setExt(::String inExt);
		::Dynamic setExt_dyn();

		void addError(::String inError);
		::Dynamic addError_dyn();

		void addFiles( ::FileGroup inGroup,bool inAsLibrary);
		::Dynamic addFiles_dyn();

		void checkError();
		::Dynamic checkError_dyn();

		void clean();
		::Dynamic clean_dyn();

		::String getKey();
		::Dynamic getKey_dyn();

};


#endif /* INCLUDED_Target */ 