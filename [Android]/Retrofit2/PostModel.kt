package com.example.practice_rrtrofit3

import com.google.gson.annotations.SerializedName

class PostModel {
    @SerializedName("userId")
    var userId: Int = 0

    @SerializedName("id")
    var id: Int? = 0

    @SerializedName("title")
    var title: String? = null

    @SerializedName("completed")
    var completed: String? = null
}