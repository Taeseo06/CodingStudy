package com.example.practice_rrtrofit3

import okhttp3.ResponseBody
import retrofit2.Call
import retrofit2.Response
import retrofit2.http.GET

interface ApiService {
    @GET("todos")
    fun getPost(): Call<List<PostModel>>

}