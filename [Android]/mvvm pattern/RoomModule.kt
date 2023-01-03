package com.example.mvvmproject

import android.content.Context

class RoomModule(val context: Context) {
    suspend fun getData() : String{
        return MainDatabase.getInstance(context)!!.mainDao().getDataAll()[0].text
    }
}